#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=i; j++) {
            std::cout << "*";
        }
        std::cout << endl << endl;
    }

    for (int i=N-1; i>0; i--) {
        for (int j=i; j>0; j--) {
            std::cout << "*";
        }
        std::cout << endl << endl;
    }

    return 0;
}