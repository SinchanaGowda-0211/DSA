#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int target;
    cin>>target;
    int length=0;
   
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==target){
                length=max(length,j-i+1);

            }

        }
    }
    cout<<length;
    return 0;
}
