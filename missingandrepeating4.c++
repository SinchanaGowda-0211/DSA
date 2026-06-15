#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    long long sum = 0;
    long long square = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        square += 1LL * arr[i] * arr[i];
    }

    long long gs = (1LL * n * (n + 1)) / 2;
    long long rs = (1LL * n * (n + 1) * (2 * n + 1)) / 6;

    long long res = sum - gs;          // R - M
    long long res2 = square - rs;      // R² - M²

    res2 = res2 / res;                 // R + M

    long long repeating = (res + res2) / 2;
    long long missing = repeating - res;

    cout << "Repeating = " << repeating << endl;
    cout << "Missing = " << missing << endl;

    return 0;
}