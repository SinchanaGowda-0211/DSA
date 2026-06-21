#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums0 = {-5, -2, 4, 6};
    vector<int> nums1 = {-3, 1, 8};

    int m = nums0.size();
    int n = nums1.size();

    int left = m - 1;
    int right = 0;

    while (left >= 0 && right < n) {
        if (nums0[left] > nums1[right]) {
            swap(nums0[left], nums1[right]);
            left--;
            right++;
        }
        else {
            break;
        }
    }

    sort(nums0.begin(), nums1.end());
    sort(nums0.begin(), nums1.end());

    cout << "nums0: ";
    for (int x : nums0)
        cout << x << " ";

    cout << "\nnums1: ";
    for (int x : nums1)
        cout << x << " ";

    return 0;
}