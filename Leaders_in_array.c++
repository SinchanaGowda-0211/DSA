#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n, vector<int>& leeder){

    for(int i=0;i<n;i++){

        bool leeder1=true;

        for(int j=i+1;j<n;j++){

            if(arr[j]>arr[i]){
                leeder1=false;
                break;
            }
        }

        if(leeder1){
            leeder.push_back(arr[i]);
        }
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    vector<int> leeder;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    leaders(arr,n,leeder);

    for(int i=0;i<leeder.size();i++){
        cout<<leeder[i]<<" ";
    }
}