#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=N; i>0; i--) {
        for (int j=i; j>0; j--) {
            std::cout << "* ";
        }
        std::cout << endl;
    }

    for (int i=2; i<=N; i++) {
        for (int j=1; j<=i; j++) {
            std::cout << "* ";
        }
        std::cout << endl;
    }
    return 0;
}