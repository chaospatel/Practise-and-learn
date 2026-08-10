#include <iostream>
int main(){
    int temp;
    std::cout << "Enter a number: ";
    std::cin>>temp;
    if (temp<=25){
        std::cout<<"ohh, it too cold"<<"\n";
        return 0;
    }
    else if (temp <30 && temp>=25){         // change it with || or !==
        std::cout<<"it's perfect weather"<<"\n";
        return 0;
    }
    else{
        std::cout<<"it's seems like valcono"<<"\n";
        return 0;
    }
}