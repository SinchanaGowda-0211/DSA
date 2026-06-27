#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=6;
    int arr[]={1,2,3,3,3,3};
    int sum=0;
    int maxi=INT_MIN;
    int start=0;
    int end=0;
    int ansstart;

    for(int i=0;i<n;i++){
       
        if(arr[i]>0){
            
            sum+=arr[i];
            
        }
        else{
            sum=0;
            start=i;

        }
        maxi=max(maxi,sum);
        ansstart=start;
        end=i;


        
    }
    cout<<sum<<endl;
    cout<<ansstart<<end;
    return 0;
}