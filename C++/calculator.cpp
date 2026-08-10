#include <iostream>
int main(){
    char op;
    double num1, num2;
    double result;
    std::cout << "Enter either (+ - / *)";
    std::cin>>op;
    std::cout << "Enter #1 ";
    std::cin >> num1;
    std::cout << "Enter #2" ;
    std::cin >> num2;
    switch(op){
        case '+':
            result=num1+num2;
            std::cout <<result<<std::endl;
            break;
        case '-':
            result=num1-num2;
            std::cout <<result<<std::endl;
            break;
        case '*':
            result=num1*num2;
            std::cout <<result<<std::endl;
            break;  
        case '/':
            result=num1/num2;
            std::cout <<result<<std::endl;
            break;
        default :
            std::cout << "Error! operator is not correct";
            break;
    }
    std::cout << "-----------------------------------------------";
    return 0;
}