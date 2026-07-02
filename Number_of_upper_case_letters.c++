#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    int count = 0;
    for(int i=0;i<s.size();i++){
        if(int(s[i]) >= 65 && int(s[i])<= 90){
            count++;
        }
    }
    cout<<"The count of upper case letter is "<<count;
    return 0;
}
