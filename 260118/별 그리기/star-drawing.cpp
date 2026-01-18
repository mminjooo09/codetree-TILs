#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N-i; j++) {
            std::cout << " ";
        }
        for (int j=1; j<=2*i-1; j++) {
            std::cout << "*";
        }
        std::cout << endl;
    }

    for (int i=N-1; i>0; i--) {
        for (int j=1; j<=N-i; j++) {
            std::cout << " ";
        }
        for (int j=1; j<=2*i-1; j++) {
            std::cout << "*";
        }
        std::cout << endl;
    }   

    return 0;
}
