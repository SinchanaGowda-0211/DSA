#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {

        sum += arr[i];

        if (sum == k) {
            maxLen = i + 1;
        }

        long long rem = sum - k;

        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {2, 0, 0, 3};
    int k = 3;

    cout << longestSubarray(arr, k);

    return 0;
}