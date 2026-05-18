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
    int maxi=arr[n-1];
    for(int i=n-1;i>0;i--){
        if(arr[i]>=maxi){
            leeders.push_back(arr[i]);
            maxi=arr[i];

        }
    }
    for(int i=0;i<leeders.size();i++){
        cout<<leeders[i]<<" ";
    }
    return 0;
}
