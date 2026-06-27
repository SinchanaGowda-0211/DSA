#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 11;

    vector<vector<int>> ans;
    unordered_map<int,int> mpp;

    for(int i = 0; i < n; i++) {
        mpp[arr[i]] = i;
    }

    for(int i = 0; i < n; i++) {
        int needed = target - arr[i];

        if(mpp.find(needed) != mpp.end() && arr[i] < needed) {
            ans.push_back({arr[i], needed});
        }
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    return 0;
}