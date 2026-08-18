#include <iostream>
using namespace std;
int main(){
    int n=2,m=2;
    for (int i=1;i<=n;i++){
         for(int j=1;i<=m;j++){
            if(i==1 or j==1 or i==n or j==m){
                cout<<'*';
            }
            else{
                cout<<endl;
            }
        }
    }
}
