#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];


    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int candidate=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
        }
        else if(arr[i]==candidate){
            count++;
        }
        else{
            count--;
        }
        return candidate;
    }
    return 0;
}