#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cin>>rows;
    int col;
    cin>>col;
   
    long long res=1;
    for(int i=0;i<col;i++){
        res=res*(rows-i);
        res=res/(i+1);
       
    }
    cout<<res;
    return 0;
}