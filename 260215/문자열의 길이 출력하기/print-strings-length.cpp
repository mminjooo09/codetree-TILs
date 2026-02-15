#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    std::cin >> str1 >> str2;
    std::cout << str1.length() + str2.length();
    
    return 0;
}