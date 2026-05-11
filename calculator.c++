#include<bits/stdc++.h>
using namespace std;

bool calculate(char op, int a, int b, int &result) {
    switch(op) {
        case '+':
            result = a + b;
            return true;

        case '-':
            result = a - b;
            return true;

        case '*':
            result = a * b;
            return true;

        case '/':
            if(b == 0) return false;
            result = a / b;
            return true;

        default:
            return false;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    char op;
    cout << "Enter operator (+ - * /): ";
    cin >> op;

    int result;

    if(calculate(op, a, b, result)) {
        cout << "Result: " << result;
    } else {
        cout << "Error: Invalid operation or division by zero";
    }

    return 0;
}