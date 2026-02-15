#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    std::cin >> str1 >> str2;
    
    if (str1.length() > str2.length())
        std::cout << str1 << " " << str1.length();
    else if (str1.length() < str2.length())
        std::cout << str2 << " " << str2.length();
    else
        std::cout << "same";
    
    return 0;
}