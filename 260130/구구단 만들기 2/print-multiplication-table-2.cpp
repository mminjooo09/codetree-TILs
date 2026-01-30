#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    for (int i=2; i<=8; i+=2) {
        for (int j=B; j>=A; j--) {
            std::cout << j << " * " << i << " = " << j*i;
            if (j>A)
                std::cout << " / ";
            else
                continue;
        }
        std::cout << endl;
    }
    
    return 0;
}