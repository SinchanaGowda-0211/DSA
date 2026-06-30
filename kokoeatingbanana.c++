#include<bits/stdc++.h>
using namespace std;

bool canEat(vector<int>& piles, int h, int k)
{
    long long hours = 0;

    for(int pile : piles)
    {
        hours += (pile + k - 1) / k;
    }

    return hours <= h;
}

int main()
{
    int n, h;
    cin >> n;

    vector<int> piles(n);

    for(int i = 0; i < n; i++)
    {
        cin >> piles[i];
    }

    cin >> h;

    int low = 1;
    int high = *max_element(piles.begin(), piles.end());

    int ans = high;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(canEat(piles, h, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans;

    return 0;
}