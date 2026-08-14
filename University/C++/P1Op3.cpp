#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr2[m][n]={};
    for(int i=0;i<m;i=i+1){
        for(int j=0;j<n;j=j+1){
            arr2[i][j]=j+1;
        }
    }
    for (int i=0;i<m;i=i+1){
        for (int j=0;j<n;j=j+1){
            cout << arr2[i][j]<<" ";
        }
    }
    return 0;
} 