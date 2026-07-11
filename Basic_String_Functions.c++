#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "Programming";
    string t = "Sinchana";

    cout << "Original String : " << s << endl;

    cout << "\nLength : " << s.length() << endl;
    cout << "Size : " << s.size() << endl;

    cout << "\nFirst Character : " << s.front() << endl;
    cout << "Last Character : " << s.back() << endl;

    s.push_back('!');
    cout << "\nAfter push_back('!') : " << s << endl;

    s.pop_back();
    cout << "After pop_back() : " << s << endl;

    cout << "\nIs Empty : ";
    if(s.empty())
        cout << "Yes";
    else
        cout << "No";

    cout << endl;

    s.append(t);
    cout << "\nAfter append() : " << s << endl;

    return 0;
}