#include <iostream>

int main(){
    int temp;
    char unit;
    std::cout << "To what would would you like to convert today?";
    std::cin>>unit;
    if (unit=='F'|| unit=='f'){
        std::cout<<"Enter temperature in Celsius";
        std::cin>>temp;
        std::cout<<(1.8*temp)+32.0<<" F";
    }
    else if (unit=='C'||unit=='c'){
        std::cout<<"Enter temperature in Fahrenheti";
        std::cin>>temp;
        std::cout<<(temp-32.0)/1.8<<" C";
    } 
    else{
        std::cout<<"invalid Character!";
    }
    }
