#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    for (int i = A; i <= B; i++) {
        if (i%2==1) {
            std::cout << i << " ";
        }
    }
    
    return 0;
}