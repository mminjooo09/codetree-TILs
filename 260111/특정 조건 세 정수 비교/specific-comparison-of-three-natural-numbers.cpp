#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << ((a<=b) && (a<=c)) << " ";
    std::cout << ((a==b) && (b==c)) << " ";

    return 0;
}