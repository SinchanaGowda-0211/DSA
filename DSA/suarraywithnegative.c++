#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<long long, int> prefixMap;

    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == k) {
            maxLen = i + 1;
        }

        if (prefixMap.find(sum - k) != prefixMap.end()) {
            int len = i - prefixMap[sum - k];
            maxLen = max(maxLen, len);
        }

        if (prefixMap.find(sum) == prefixMap.end()) {
            prefixMap[sum] = i;
        }
    }

    cout << maxLen;

    return 0;
}