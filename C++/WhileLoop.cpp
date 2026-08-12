#include <iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    while(name.empty()){
        cout<<"Enter your name";
        cin>>name;
    }
    return 0;
}