#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if ((a<=b) && (a<=c))
        std::cout << a;
    
    if ((b<=a) && (b<=c))
        std::cout << b;

    if ((c<=b) && (c<=a))
        std::cout << c;
    
    return 0;
}