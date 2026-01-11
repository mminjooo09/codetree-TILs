#include <iostream>
using namespace std;

int main() {
    int a;
    std::cin >> a;

    if ((a<10) || (a>20))
        std::cout << "yes";
    else
        std::cout << "no";
    
    return 0;
}