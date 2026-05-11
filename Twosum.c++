
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
    int left=0;
    int right=n-1;
    unordered_map<int , int> mp;
    while(left<right){
        int sum=arr[right]+arr[left];
        if(sum==target){
            cout<<"Found";
            return 0;
        }
        else if(sum<target){
            left++;
        }
        else right--;
    }
    
    

    return 0;
}

