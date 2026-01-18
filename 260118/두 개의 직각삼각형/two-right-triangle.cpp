#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N-i+1; j++) {
            std::cout << "*";
        }
        for (int j=3; j<=2*i; j++) {
            std::cout << " ";
        }
        for (int j=1; j<=N-i+1; j++) {
            std::cout << "*";
        }
        std::cout << endl;
    }

    return 0;
}