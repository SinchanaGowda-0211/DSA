#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr1={1,2,4,7};
vector<int> arr2={3,5,6};
vector<int> ans;
int m=4;
int n=3;
int right=0;
int left=0;
int index=0;

while(left < m && right < n){
    if(arr1[left] >= arr2[right]){
        ans.push_back(arr2[right]);
        right++;
    }
    else{
        ans.push_back(arr1[left]);
        left++;
    }
}

while(left < m){
    ans.push_back(arr1[left]);
    left++;
}

while(right < n){
    ans.push_back(arr2[right]);
    right++;
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i];
}
return 0;
}