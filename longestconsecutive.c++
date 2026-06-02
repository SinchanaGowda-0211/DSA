#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
}

int longestConsecutive(int arr[], int n) {
    int longest = 0;

    for(int i = 0; i < n; i++) {
        int x = arr[i];
        int count = 1;

        while(linearSearch(arr, n, x + 1)) {
            x = x + 1;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestConsecutive(arr, n);

    return 0;
}