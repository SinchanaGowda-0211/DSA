#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {-5,-2,4,5,0,0,0};
    vector<int> nums2 = {-3,1,8};

    int m = 4;
    int n = 3;

    vector<int> ans;
    int left = 0;
    int right = 0;

    while(left < m && right < n) {
        if(nums1[left] <= nums2[right]) {
            ans.push_back(nums1[left]);
            left++;
        }
        else {
            ans.push_back(nums2[right]);
            right++;
        }
    }

    while(left < m) {
        ans.push_back(nums1[left]);
        left++;
    }

    while(right < n) {
        ans.push_back(nums2[right]);
        right++;
    }

    
    for(int i = 0; i < m + n; i++) {
        nums1[i] = ans[i];
    }

    for(int x : nums1) {
        cout << x << " ";
    }

    return 0;
}