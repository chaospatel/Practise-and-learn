#include <iostream>
using namespace std;
int main(){
    int arr1[5]={10,20,30,40,50};
    int index;
    cin>>index;
    int value;
    cin>>value;
    arr1[index]=value;
    for (int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}