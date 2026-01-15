#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> B >> A;

    while (B>=A) {
        if (B%2==0)
            std::cout << B << " ";
        B--;
    }
    
    return 0;
}