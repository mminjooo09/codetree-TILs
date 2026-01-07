#include <iostream>
using namespace std;

int main() {
    int x, y;
    std::cin >> x >> y;
    
    x += 8;
    y *= 3;

    std::cout << x << endl << y << endl << x*y;

    return 0;
}