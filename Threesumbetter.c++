#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    set<vector<int>> st;
    for(int i=0;i<n;i++){
         set<int> hashset;
        for(int j=i+1;j<n;j++){
            int needed=-(arr[i]+arr[j]);
                if(hashset.find(needed) != hashset.end()){
                    vector<int> temp={arr[i],arr[j],needed};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    for(auto it:st){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}