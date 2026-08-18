#include <iostream>
using namespace std;
int main(){
    int arr1[100],a=0,b=0,n=0;
    cout<<"Please Select Operation Number from the given list below :"<<endl;
    cout<<"1. Initialise 1D array and display all elements."<<endl;
    cout<<"2. Access an element using its specified index position."<<endl;
    cout<<"3. Insert a new element at a specified index position by shifting the subsequent elements to the right."<<endl;
    cout<<"4. Modify an element at a specified index position with a new value."<<endl;
    cout<<"5. Delete an element from a specified index position by shifting the subsequent elements to the left."<<endl;
    cout<<"6. Display the updated array after modification and deletion."<<endl;
    cin>>a;
    switch(a){
        case 1 :{
            cout<<"Number of elements you would like to enter : ";
            cin>>n;
            int arr1[n]={};
            for (int i=1;i<=n;i++){
                cout<<"Enter "<<i<<" element for the array : ";
                cin>>b;
                arr1[i]=b;
                b=0;
            }
            for (int i=1;i<=n;i++){
                cout<<arr1[i]<<" ";
            }
        }
        
        case 2 :{
            cout<<"Enter element index number to be accessed : ";
            cin>>n;
            cout<<arr1[n];
        }
        case 3:{
            cout<<"";
        }
    }
    return 0;
}