#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int array[N];
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }

    for (int i = N-1; i >= 0; i--) {
        if (array[i] % 2 == 0) {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}