#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "Programming";

    cout << "Original String : " << s << endl;

    cout << "\nSubstring (0,4) : " << s.substr(0,4) << endl;

    cout << "Find \"gram\" : " << s.find("gram") << endl;

    s.insert(0,"C++ ");
    cout << "\nAfter insert() : " << s << endl;

    s.erase(0,4);
    cout << "After erase() : " << s << endl;

    s.replace(0,7,"Coding");
    cout << "After replace() : " << s << endl;

    string a = "Apple";
    string b = "Banana";

    cout << "\nCompare Apple and Banana : " << a.compare(b) << endl;

    swap(a,b);

    cout << "\nAfter swap()" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    reverse(s.begin(),s.end());
    cout << "\nAfter reverse() : " << s << endl;

    sort(s.begin(),s.end());
    cout << "After sort() : " << s << endl;

    string num = "12345";
    int x = stoi(num);

    cout << "\nString to Integer : " << x << endl;

    int year = 2026;

    cout << "Integer to String : " << to_string(year) << endl;

    char ch = 'g';

    cout << "\nUppercase of g : " << char(toupper(ch)) << endl;
    cout << "Lowercase of G : " << char(tolower('G')) << endl;

    cout << "\nisupper('A') : " << isupper('A') << endl;
    cout << "islower('a') : " << islower('a') << endl;
    cout << "isdigit('7') : " << isdigit('7') << endl;
    cout << "isalpha('@') : " << isalpha('@') << endl;

    return 0;
}