#include <iostream>
using namespace std;

int main() {
    int A;
    std::cin >> A;

    if (A % 2 == 1)
        A += 3;
    
    if (A % 3 == 0)
        A /= 3;
    
    std::cout << A;

    return 0;
}