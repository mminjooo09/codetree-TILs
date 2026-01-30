#include <iostream>
using namespace std;

int main() {
    int N, a, b;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        std::cin >> a >> b;
        int mux = 1;

        for (int i=a; i<=b; i++) {
            mux *= i;
        }

        std::cout << mux << endl;
    }

    return 0;
}