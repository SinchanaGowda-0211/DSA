#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> mpp;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    vector<int> leeders;
    int maxi=INT_MIN;
   for(int i=n-1;i>0;i--){

    if(arr[i]>maxi){
        leeders.push_back(arr[i]);
    }

   }
   for(int i=0;i<leeders.size();i++){
    cout<<leeders[i];
   }

    
    return 0;
}