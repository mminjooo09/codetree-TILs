#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i % 2 == 0) {
                std::cout << j + 1;
            }
            else {
                std::cout << N - j;
            }
        }
        std::cout << endl;
    }
    
    return 0;
}