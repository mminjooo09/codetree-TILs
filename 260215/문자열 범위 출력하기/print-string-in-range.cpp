#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline (std::cin, str);

    for (int i=2; i<10; i++) {
        std::cout << str[i];
    }

    return 0;
}