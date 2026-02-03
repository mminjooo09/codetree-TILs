#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int a;
    
    for (int i=0; i<10; i++) {
        std::cin >> a;
        sum += a;
    }

    std::cout << sum;

    return 0;
}