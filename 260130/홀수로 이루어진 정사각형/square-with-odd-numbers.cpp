#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=0; j<N; j++) {
            std::cout << 10 + (2*i-1) + (2*j) << " ";
        }
        std::cout << endl;
    }

    return 0;
}