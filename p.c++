#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=i+1;j<n;j++){
        if(arr[j]!=0){
              i++;
            swap(arr[i],arr[j]);
          
        }

    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
    return 0;
}