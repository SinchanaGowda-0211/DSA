
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    int target;
    cin >> target;
    


    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int right=0;
    int left=n-1;
    while(right<left){
        if(arr[right]+arr[left]==target){
            cout<<"found";
            return 0;
        }
        else if(arr[right]+arr[left]<target){
            right++;
        }
        else left--;
    }
    

        
    

    return 0;
}

