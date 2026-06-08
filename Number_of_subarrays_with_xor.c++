#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int count=0;
    for(int i=0;i<n;i++){
        int xors=0;
        for(int j=i;j<n;j++){
            xors^=arr[j];
            if(xors==k){
                count++;
            }

        }
    }
    cout<<count;
    return 0;
}