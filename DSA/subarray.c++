#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int target;
    cin>>target;
   
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int length=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<j;k++){
                cout<<arr[k];
                for(int i=0;i<n;i++){
                    sum+=arr[k];
                    if(sum==target){
                        length=max(length,i-j+1);

                    }
                }
                
            }
            cout<<endl;
        }
        
    }
    cout<<length;
    return 0;
}