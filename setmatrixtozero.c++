#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            if(arr[i][j] == 0){

                // mark row
                for(int k = 0; k < m; k++){

                    if(arr[i][k] != 0){
                        arr[i][k] = -1
                    }
                }

                
                for(int k = 0; k < n; k++){

                    if(arr[k][j] != 0){
                        arr[k][j] = -1;
                    }
                }
            }
        }
    }

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }

    
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}