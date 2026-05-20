#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    vector<int> leeders;
    

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        int maxi=0;
        for( int j=i+1;j<n;j++){
            if(arr[j]>maxi){
                maxi=arr[j];
            }
            
        }
        arr[i]=maxi;
        
    }
    arr[n-1]=-1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}