#include<bits/stdc++.h>
using namespace std;
int longest(int arr[],int n){
    int longests=1;
    int lastsmaller=INT_MIN;
    int count=0;
   
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastsmaller){
            count=count+1;
            lastsmaller=arr[i];
        }
        else if(arr[i]-1 !=lastsmaller){
            count=1;
            lastsmaller=arr[i];
        }
        longests=max(longests,count);

    }
    return longests;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int res=longest(arr,n);
    cout<<res;
    return 0;
}