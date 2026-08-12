#include <iostream>
using namespace std;
int main(){
    int n,g,t;
    srand(time(NULL));
    int num=(rand()%100)+1;

    cout<<"*****Number Guessing Game*****";

    do{
        cout<<"Enter a guess between (1-100)";
        cin>>g;
        t++;
        if(g>num){
            cout<<"Too high";
        }
        else if(g<num){
            cout<<"Too low";
        }
        else{
            cout<<"Correct! # of tries: "<<t<<"\n";
        }
    }while(g!=num);

    cout<<"*****Number Guessing Game*****";

    return 0;
}
