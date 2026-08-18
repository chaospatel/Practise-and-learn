#include <iostream>
using namespace std;
int main(){
    int arr2[3][3]={{1,2,3},{4,5,6}};
    int r, c, v;
    cin>>r;
    cin>>c;
    cin>>v;
    arr2[r][c]=v;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<"\n";}
    return 0;

}