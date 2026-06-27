#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={-1,-2,-3,4,5,6,7,8};
    int n=8;
    int pos=0;
    int neg=0;
    int ans[n];
    int poscount=0;
    int negcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            poscount++;
        }
        else{
            negcount++;
        }

    }
    if(negcount<poscount){
    for(int i=0;i<negcount*2;i++){
        if(arr[i]>0){
            ans[pos*2]=arr[i];
            pos++;

        }
        else{
            ans[neg*2+1]=arr[i];
            neg++;
        }
    }
    for(int i=negcount*2;i<n;i++){
        ans[i]=arr[i];
    }
}

    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}