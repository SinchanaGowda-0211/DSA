#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {-5,-2,4,5,0,0,0};
    vector<int> nums2 = {-3,1,8};

    int m = 4;
    int n = 3;
    int ans[n+m];
int right=0;
int left=0;
int index=0;
while(left<n && right<m){
    if(nums1[left] <= nums2[right]){
        ans[index]=nums1[left];;
        index++;
        left++;

    }
    else{
        ans[index]=nums2[right];
        index++;
        right++;

    }

}
while(left<n){
    ans[index]=nums1[left];
    index++;
    left++;
}
while(right<m){
    ans[index]=nums2[right];
    index++;
    right++;

}
for(int i=0;i<n+m;i++){
    if(i<n){
    nums1[i]=ans[i];
    }
    else{
        nums2[i-n]=ans[i];
    }

}

return 0;
}
