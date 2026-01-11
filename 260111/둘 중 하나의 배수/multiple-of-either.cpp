#include <iostream>
using namespace std;

int main() {
    int A;
    std::cin >> A;

    std::cout << ((A%3==0) || (A%5==0));
    
    return 0;
}