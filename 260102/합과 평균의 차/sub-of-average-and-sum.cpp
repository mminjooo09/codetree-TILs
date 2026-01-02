#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    std::cin >> a >> b >> c;
    
    int sum = a+b+c;
    int ave = sum/3;

    std::cout << sum << "\n" << ave << "\n" << sum-ave;

    return 0;
}