#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i = N; i >= 1; i--) {
        std::cout << i << " ";
    }
    
    return 0;
}