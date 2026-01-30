#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    for (int i=1; i<=9; i++) {
        for (int j=B; j>=A; j-=2) {
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