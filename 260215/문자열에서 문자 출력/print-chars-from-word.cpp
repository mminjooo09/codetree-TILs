#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    std::cin >> str;

    for (int i=0; str[i]!='\0'; i++) {
        std::cout << str[i] << endl;
    }

    return 0;
}