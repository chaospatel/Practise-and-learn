#include <iostream>
using namespace std;
int main() {
    std::string name;
    name.clear();
    name.append("@gamil.com");
    name.at(0);
    getline(cin,name);
    if (name.length() == 15){}
    else if (name.empty()){}
    
}