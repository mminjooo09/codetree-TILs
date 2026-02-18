#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    std::cin >> str;

    str[1] = str[str.length()-2] = 'a';

    std::cout << str;

    return 0;
}