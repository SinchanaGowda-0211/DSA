#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    int ans[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int posind = 0;
    int negind = 0;

    for(int i=0;i<n;i++){

        if(arr[i] > 0){

            ans[posind * 2] = arr[i];
            posind++;
        }

        else{

            ans[negind * 2 + 1] = arr[i];
            negind++;
        }
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }

    return 0;
}