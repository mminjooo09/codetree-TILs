#include <iostream>
using namespace std;

int main() {
    double arr[8];
    double sum=0;

    for (int i=0; i<8; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << fixed;
    std::cout.precision(1);
    std::cout << sum/8;

    return 0;
}