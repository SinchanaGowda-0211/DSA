#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    vector<vector<int>> arr(row,vector<int>(col));

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<int> ans;

    int top=0;
    int bottom=row-1;
    int left=0;
    int right=col-1;

    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            ans.push_back(arr[top][i]);
        }
        top++;

        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(arr[i][right]);
        }
        right--;

        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }

        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }

    for(int x:ans)
    {
        cout<<x<<" ";
    }

    return 0;
}