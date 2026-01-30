#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N-i+1; j++) {
            std::cout << i << " * " << j << " = " << i*j;
            if (j==N-i+1)
                continue;
            else
                std::cout << " / ";
        }
        std::cout << endl;
    }

    return 0;
}