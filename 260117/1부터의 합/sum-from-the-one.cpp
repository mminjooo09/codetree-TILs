#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    std::cin >> N;

    for (int i=1; i<=100; i++) {
        sum += i;
        
        if (sum >= N) {
            std::cout << i;
            break;
        }
    }

    return 0;
}