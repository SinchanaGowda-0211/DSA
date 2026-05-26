#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> rows;
    rows.push_back(1);
    
    long long ans=1;
    for(int i=1;i<=n;i++){
       ans=ans*(n-i+1);
       ans=ans/i;
       rows.push_back(ans);
    }
    for(int i=0;i<rows.size();i++){
        cout<<rows[i];
        
    }
    return 0;
}
       