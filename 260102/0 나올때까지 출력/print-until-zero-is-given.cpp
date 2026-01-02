#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 100; i++) {
        int N;
        std::cin >> N;

        if (N != 0) {
            std::cout << N << endl;
            continue;
        }
        
        if (N == 0) {
            break;
        }
    }

    return 0;
}