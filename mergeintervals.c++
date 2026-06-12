#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> intervals = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    for(int i = 0; i < intervals.size(); i++) {

        if(ans.empty() || intervals[i][0] > ans.back()[1]) {
            ans.push_back(intervals[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }

    for(auto it : ans) {
        cout << "[" << it[0] << "," << it[1] << "] ";
    }

    return 0;
}