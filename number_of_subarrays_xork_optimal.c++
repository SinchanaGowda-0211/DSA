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
    int xors=0;
    unordered_map<int,int> mpp;
    mpp[xors]++;
    int count=0;
    for(int i=0;i<n;i++){
        xors^=arr[i];
        int x=xors^k;
        count+=mpp[x];
        mpp[xors]++;

    }
    cout<<count;
    return 0;
    }
