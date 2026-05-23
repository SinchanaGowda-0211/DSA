#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    unordered_map<int,int> mp;

    mp[0] = 1;

    int prefixSum = 0;
    int count = 0;

    for(int i=0;i<n;i++){

        prefixSum += arr[i];

        if(mp.find(prefixSum - target) != mp.end()){
            count += mp[prefixSum - target];
        }

        mp[prefixSum]++;
    }

    cout << count;

    return 0;
}