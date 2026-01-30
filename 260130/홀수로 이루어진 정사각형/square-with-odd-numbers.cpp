#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=10; i<=((2*N-1)+10); i+=2) {
        for (int j=1; j<=N; j++) {
            std::cout << i+(2*j-1) << " ";
        }
        std::cout << endl;
    }

    return 0;
}