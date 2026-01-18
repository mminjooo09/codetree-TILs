#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=2*N; i++) {
        if (i%2==0) {
            for (int j=1; j<=i/2; j++) {
                std::cout << "* ";
            }
        }
        else {
            for (int j=1; j<=N-(i/2); j++) {
                std::cout << "* ";
            }
        }
        
        std:;cout << endl;
    }

    return 0;
}