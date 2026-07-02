#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    int count = 0;

    for (int i = 0; i < s.size(); i++) {

        char ch = tolower(s[i]);

        if (isalpha(ch) &&
            ch != 'a' &&
            ch != 'e' &&
            ch != 'i' &&
            ch != 'o' &&
            ch != 'u') {

            count++;
        }
    }

    cout << "Number of consonants = " << count;

    return 0;
}