#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1 = "Swativishwanath";
    s1.erase(5);
    cout << s1 << endl;

    string s2 = "Computer";
    s2.erase(5,2);
    cout << s2 << endl;

    string s3 = "Computer";
    s3.erase(s3.begin() + 5);
    cout << s3 << endl;

    return 0;
}