#include <iostream>
using namespace std;
/*
int n;
string source[], auxiliary, destination;
int main(){
    cout<<"-----------------------------";
    cout<<"       Tower of Hanoi        ";
    cout<<"-----------------------------";
    cout<<"Number of Disks : ";
    cin>>n;
    string towerA[n],towerB[n],towerC[n];
    cout<<"Source Tower : ";
    cin>>source[];
    initial(n,source);
    cout<<"Destination Tower : ";
}
void initial(int n,string source[]){
    for (int i=1;i<=n;i++){
        source[i]=i;
    }
    }
void transfer(){

}*/
void towerOfHanoi(int n,string source,string auxilary,string destination){
    if (n==0)
    return 0;
    towerOfHanoi(n-1,source,auxilary,destination);
    cout<<"";
}