#include <iostream>
using namespace std;

int main() {
    int N;
    
    std::cin >> N;

    for (int i = 1; i < 6; i++) {
        std::cout << (N*i) << " ";
    }

    return 0;
}