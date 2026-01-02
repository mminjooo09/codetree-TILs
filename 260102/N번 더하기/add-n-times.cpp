#include <iostream>
using namespace std;

int main() {
    int A, N;

    std::cin >> A >> N;

    for (int i = 0; i < N; i++) {
        std::cout << (A+=N) << endl;
    }

    return 0;
}