#include <iostream>
using namespace std;

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a % 2 == 0)
        std::cout << "even" << endl;
    else
        std::cout << "odd" << endl;
    
    if (b % 2 == 0)
        std::cout << "even" << endl;
    else
        std::cout << "odd" << endl;

    return 0;
}