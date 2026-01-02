#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            std::cout << i << " * " << j << " = " << i*j;
            if (j == N) {
                break;
            }
            std::cout << ", ";
        }
        std::cout << endl;
    }

    return 0;
}