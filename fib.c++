#include<bits/stdc++.h>
using namespace std;
bool func(string &n,int i){
    if(i>n.size()/2){
        return true;
    }
    if(n[i]!=n[n.size()-i-1]){
        return false;
    }
    return (n,i+1);

};
int main(){
    string n;
    getline(cin,n);
    string res="";
    for(int i=0;i<n.size();i++){
        if(isalnum (n[i])){
            res+=n[i];

        }
    }
if(func(n,0)){
    cout<<"palindrome";

        }
        else
        cout<<"not an palindrome";
    
    return 0;
    }
