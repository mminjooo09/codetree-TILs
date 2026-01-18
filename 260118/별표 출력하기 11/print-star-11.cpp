#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=2*N+1; i++) {
        for (int j=1; j<=2*N+1; j++) {
            if (i%2==1 || j%2==1) {
                std::cout << "* ";
            }
            else {
                std::cout << "  ";
            }
        }
        std::cout << endl;
    }

    return 0;
}