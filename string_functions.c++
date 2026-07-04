#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "Programming";
    string t = " Language";

    cout << "Original String : " << s << endl;

    cout << "\n1. Length : " << s.length() << endl;
    cout << "2. Size : " << s.size() << endl;

    cout << "\n3. First Character : " << s.front() << endl;
    cout << "4. Last Character : " << s.back() << endl;

    s.push_back('!');
    cout << "\n5. After push_back('!') : " << s << endl;

    s.pop_back();
    cout << "6. After pop_back() : " << s << endl;

    cout << "\n7. Is Empty? : " << s.empty() << endl;

    s.append(t);
    cout << "\n8. append() : " << s << endl;

    s = "Programming";

    cout << "\n9. substr(0,4) : " << s.substr(0,4) << endl;

    cout << "10. find(\"gram\") : " << s.find("gram") << endl;

    s.insert(0, "C++ ");
    cout << "\n11. insert() : " << s << endl;

    s.erase(0,4);
    cout << "12. erase() : " << s << endl;

    s.replace(0,7,"Coding");
    cout << "13. replace() : " << s << endl;

    string a = "Apple";
    string b = "Banana";

    cout << "\n14. compare() : " << a.compare(b) << endl;

    swap(a,b);
    cout << "15. swap()" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    reverse(s.begin(), s.end());
    cout << "\n16. reverse() : " << s << endl;

    sort(s.begin(), s.end());
    cout << "17. sort() : " << s << endl;

    string num = "12345";
    int x = stoi(num);
    cout << "\n18. stoi() : " << x + 10 << endl;

    int n = 2026;
    string year = to_string(n);
    cout << "19. to_string() : " << year << endl;

    char ch = 'g';

    cout << "\n20. toupper('g') : " << char(toupper(ch)) << endl;
    cout << "21. tolower('G') : " << char(tolower('G')) << endl;

    cout << "\n22. isupper('A') : " << isupper('A') << endl;
    cout << "23. islower('a') : " << islower('a') << endl;
    cout << "24. isdigit('7') : " << isdigit('7') << endl;
    cout << "25. isalpha('@') : " << isalpha('@') << endl;

    return 0;
}