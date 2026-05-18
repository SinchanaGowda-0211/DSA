#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    
    for(int i=0;i<n.length()/2;i++){
        if(n[i]==n[(n.length()-i-1)]){
           

        }
        else{
            cout<<"Not an palindrome";
           return 0;
        }
    }
    cout<<"Palindrome";
    
   
    return 0;
}