#include<bits/stdc++.h>
using namespace std;
bool func(string &n,int i){
    
    if(i>n.size()/2){
        return true;
    }
    if(n[i]!=n[n.size()-i-1]){
        return false;
    }
            

return func(n,i+1);
}
int main(){
    string n;
    getline(cin,n);
     string result = "";
    for(int i=0;i<n.size();i++){
        
        if(isalnum(n[i])){      // keep only letters and numbers
            result += n[i];
    

    }
}
cout<<result;
int k=n.size();
func(n,0);
if(func(n,0))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

return 0;
}