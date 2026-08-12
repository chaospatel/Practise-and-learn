#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr2[m][n]={};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr2[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout << arr2[i][j]<<" ";
        }
    }
    return 0;
}