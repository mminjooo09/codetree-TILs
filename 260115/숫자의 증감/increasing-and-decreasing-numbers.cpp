#include <iostream>
using namespace std;

int main() {
    char C;
    int N;
    std::cin >> C >> N;

    if (C == 'A') {
        for (int i=1; i<=N; i++) {
            std::cout << i << " ";
        }
    }
    else if (C == 'D') {
        for (int i=N; i>=1; i--) {
            std::cout << i << " ";
        }
    }
    
    return 0;
}