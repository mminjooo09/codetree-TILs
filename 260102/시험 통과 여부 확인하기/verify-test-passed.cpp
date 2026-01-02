#include <iostream>
using namespace std;

int main() {
    int N;

    std::cin >> N;

    if (N >= 80) {
        std::cout << "pass";
    } else {
        std::cout << 80-N << " more score";
    }
    
    return 0;
}