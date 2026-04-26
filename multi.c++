#include<bits/stdc++.h>
using namespace std;
int func( char option,int a,int b){
     switch(option){
       case '+':
       return a+b;
       break;
       case '-':
       return a-b;
       break;
       case '*':
       return a*b;
       break;
       case '/':
       return a/b;
       if(b!=0)
       {
        return a/b;
       }
       break;
       default: cout<<"NO options matched";

    }
}

int main(){
    int a,b;
    cin>>a>>b;
    char option;
    cout<<"Enter the operator"<<"+"<<endl<<"-"<< endl<<"*"<<endl<<"/";
    cin>>option;
    func(option,a,b);
   
    return 0;
    

}