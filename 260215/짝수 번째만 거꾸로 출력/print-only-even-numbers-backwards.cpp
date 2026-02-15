#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    std::cin >> str;

    for (int i=str.length()-1; i>=0; i--) {
        if (i%2!=0)
            std::cout << str[i];
    }

    return 0;
}