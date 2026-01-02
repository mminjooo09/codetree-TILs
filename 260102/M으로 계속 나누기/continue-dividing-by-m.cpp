#include <iostream>

using namespace std;

int main() {
    int N, M;

    std::cin >> N >> M;

    while (N > 0) {
        std::cout << N << endl;
        N /= M;
    }
    
    return 0;
}
