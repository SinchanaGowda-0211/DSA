#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;

    for (int row = 0; row < numRows; row++) {
        vector<int> temp;
        long long val = 1;

        temp.push_back(1);

        for (int col = 1; col <= row; col++) {
            val = val * (row - col + 1);
            val = val / col;
            temp.push_back(val);
        }

        ans.push_back(temp);
    }

    return ans;
}

int main() {
    int numRows;
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    for (auto row : result) {
        for (auto num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}