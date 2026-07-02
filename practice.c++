#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr={1,2,3,4,5};
   vector<vector<int>> ans;
   int n=5;
   int target;
   cin>>target;
   
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
         set<int> hash;
        for(int k=j+1;k<n;k++){
            int needed=target-arr[i]-arr[j]-arr[k];
            if(hash.find(needed) != hash.end()){
                vector<int> temp={needed,arr[i],arr[j],arr[k]};
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
            }

        hash.insert(arr[k]);
        }
        
    }
    

   }
    
    return 0;
    
}
    
