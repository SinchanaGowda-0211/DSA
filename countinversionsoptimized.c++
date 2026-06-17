#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int low = 1;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        int count = 0;

        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }

        if (count > mid) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    cout << findDuplicate(nums);

    return 0;
}