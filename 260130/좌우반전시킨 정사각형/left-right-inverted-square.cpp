#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=N; j>0; j--) {
            std::cout << i*j << " ";
        }
        std::cout << endl;
    }

    return 0;
}