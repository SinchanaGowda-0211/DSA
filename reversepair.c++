#include <bits/stdc++.h>
using namespace std;

int reversePairs(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((long long)nums[i] > 2LL * nums[j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<int> nums = {1, 3, 2, 3, 1};

    cout << reversePairs(nums);

    return 0;
}