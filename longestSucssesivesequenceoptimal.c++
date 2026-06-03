#include<bits/stdc++.h>
using namespace std;
int longests(int arr[],int n){
   unordered_set<int> st;
   int  longest=1;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it:st){
        if(st.find(it-1) == st.end()){
            int count=1;
            int x=it;
            while(st.find(x+1) != st.end()){
                x+=1;
                count+=1;

            }
longest=max(longest,count);
          }
        }
        return longest;
       
    }
     

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int res=longests(arr,n);
    cout<<res;
    return 0;
}