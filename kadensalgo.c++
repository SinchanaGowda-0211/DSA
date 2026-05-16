#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
        cout<<maxi;
        return 0;
    }