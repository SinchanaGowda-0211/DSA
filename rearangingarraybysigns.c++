#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans[n];
    int pos=0;
    int neg=0;
   for(int i=0;i<n;i++){
    if(arr[i]>0){
        ans[pos*2]=arr[i];
        pos++;
    }
    else{
        ans[neg*2+1]=arr[i];
        neg++;
    }

   }
   for(int i=0;i<n;i++){
    cout<<ans[i];
   }
        return 0;
    }