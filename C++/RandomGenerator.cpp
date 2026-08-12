#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int rn=rand()%5+1;
    switch(rn){
        case 1: cout<<1;break;
        case 2: cout<<2;break;
        case 3: cout<<3;break;
        case 4: cout<<4;break;
        case 5: cout<<5;break;
        case 6: cout<<6;break;
    }
    return 0;
}