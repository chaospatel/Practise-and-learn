#include <iostream>
using namespace std;
int main() {
    std::string name;
    name.clear();
    name.append("@gamil.com");
    cout<<name.at(0);
    getline(cin,name);
    if (name.length() == 15){}
    else if (name.empty()){}
    name.insert(3,"abc");
    name.erase(0,4);
}