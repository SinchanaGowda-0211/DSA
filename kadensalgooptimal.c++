#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    int maxi = INT_MIN;

    int start = 0;      
    int ansStart = 0;  
    int ansEnd = 0;     

    for(int i = 0; i < n; i++) {

        if(sum == 0) {
            start = i;
        }

        sum += arr[i];

        if(sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum Sum = " << maxi << endl;
    cout << "Start Index = " << ansStart << endl;
    cout << "End Index = " << ansEnd << endl;

    cout << "Subarray: ";
    for(int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}