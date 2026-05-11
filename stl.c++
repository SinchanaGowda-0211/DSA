#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int current_count = 0;
    int max_count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            current_count++;  // extend streak
            max_count = max(max_count, current_count);
        } else {
            current_count = 0; // break streak
        }
    }

    cout << max_count;
    return 0;
}