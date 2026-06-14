#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    long long sum = 0;
    long long sqSum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        sqSum += 1LL * arr[i] * arr[i];
    }

    long long expectedSum = 1LL * n * (n + 1) / 2;
    long long expectedSqSum = 1LL * n * (n + 1) * (2 * n + 1) / 6;

    long long x = expectedSum - sum;           
    long long y = (expectedSqSum - sqSum) / x; 

    long long missing = (x + y) / 2;
    long long repeating = missing - x;

    cout << "Missing = " << missing << endl;
    cout << "Repeating = " << repeating << endl;

    return 0;
}