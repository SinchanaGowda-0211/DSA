#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int repeating = -1;
    int missing = -1;

    for(int i=1;i<=n;i++) {
        if(mpp[i] == 2)
            repeating = i;

        if(mpp[i] == 0)
            missing = i;
    }

    cout << "Missing = " << missing << endl;
    cout << "Repeating = " << repeating << endl;

    return 0;
}