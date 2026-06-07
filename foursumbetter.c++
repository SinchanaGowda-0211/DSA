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
    
    for(int j=i+1;j<n;j++){
        set<int> hashset;
        for(int k=j+1;k<n;k++){
            int four=-(arr[i]+arr[j]+arr[k]);
            if(hashset.find(four) != hashset.end()){
                vector<int> temp={arr[i],arr[j],arr[k],four};
                sort(temp.begin(),temp.end());
                st.insert(temp);

            }
            hashset.insert(arr[k]);
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

