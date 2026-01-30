#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    for (int i=1; i<=A; i++) {
        for (int j=1; j<=B; j++) {
            std::cout << i*j << " ";
        }
        std::cout << endl;
    }

    return 0;
}