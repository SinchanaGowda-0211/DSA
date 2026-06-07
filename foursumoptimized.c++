#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && arr[j]==arr[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
            int sum=arr[i]+arr[j]+arr[k]+arr[l];
            if(sum>0){
                l--;
            }
            else if(sum<0){
                k++;
            }
            else{
                vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                sort(temp.begin(),temp.end());
                st.insert(temp);
                k++;
                l--;
                while(k<l && arr[k]==arr[k-1]) k++;
                while(k<l && arr[l]==arr[l+1]) l--;

            }
        }
    }
}
for(auto it:st){
    for(auto x:it){
        cout<<x<<" ";

    }
    cout<<endl;
}
return 0;
}