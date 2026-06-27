#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n=10;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target=11;
    int left=0;
    vector<vector<int>> ans;
    int right=n-1;
    while(left<right){
        int sum=arr1[left]+arr1[right];
        if(sum==target){
            vector<int> temp={arr1[left],arr1[right]};
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
            left++;
            right--;
            
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }

    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}

    
