#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    std::cin >> A >> B >> C;

    if (A > B) {
        if (B > C) {        // A>B>C
            std::cout << B;
        }
        else if (A < C) {   // C>A>B
            std::cout << A;
        }  
        else {              // A>C>B
            std::cout << C;
        }
    }
    else if (A > C) {       // B>A>C
        std::cout << A;
    }
    else if (B > C) {       // B>C>A
        std::cout << C;
    }
    else {                  // C>B>A
        std::cout << B;
    }

    return 0;
}