#include <iostream>
using namespace std;

int main() {
    int N;
    int prod = 1;;
    std::cin >> N;

    for (int i=1; i<=10; i++) {
        prod *= i;

        if (prod >= N) {
            std::cout << i;
            break;
        }
    }
    
    return 0;
}