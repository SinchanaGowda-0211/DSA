#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> rows(row,0);
    vector<int> cols(col,0);
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                rows[i]=1;
                cols[j]=1;
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(rows[i] || cols[j]){
                arr[i][j]=0;
            }
        }
    }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j];

            }
        }
        return 0;

}