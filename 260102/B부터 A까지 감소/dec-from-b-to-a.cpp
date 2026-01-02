#include <iostream>
using namespace std;

int main() {
    int A, B;

    std::cin >> A >> B;

    for (int i = B; i >= A; i--) {
        std::cout << i << " ";
    }
    
    return 0;
}