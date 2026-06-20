#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {-5, -2, 4, 6};
    vector<int> nums2 = {-3, 1, 8};

    int m = nums1.size();
    int n = nums2.size();

    int left = m - 1;
    int right = 0;

    while (left >= 0 && right < n) {
        if (nums1[left] > nums2[right]) {
            swap(nums1[left], nums2[right]);
            left--;
            right++;
        }
        else {
            break;
        }
    }

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    cout << "nums1: ";
    for (int x : nums1)
        cout << x << " ";

    cout << "\nnums2: ";
    for (int x : nums2)
        cout << x << " ";

    return 0;
}