#include <iostream>
#include <string>
using namespace std;

int main() {
    char c;
    std::cin >> c;

    if (c == 'a')
        c += 'z'-'a';
    else
        c -= 1;
    
    std::cout << c;

    return 0;
}