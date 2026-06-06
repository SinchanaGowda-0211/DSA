#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    set<vector<int>> st;
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            int needed=-(arr[i]+arr[j]);
                if(mpp.find(needed) != mpp.end()){
                    vector<int> temp={arr[i],arr[j],needed};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

            }
        }
    }
    return 0;
}