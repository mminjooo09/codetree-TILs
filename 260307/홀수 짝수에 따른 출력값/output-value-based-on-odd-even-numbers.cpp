#include <iostream>
using namespace std;

int Even(int n) {
    if (n==2)
        return 2;
    
    return n + Even(n-2);
}

int Odd(int n) {
    if (n==1)
        return 1;
    
    return n + Odd(n-2);
}

int main() {
    int N;
    std::cin >> N;

    if (N%2==0)
        std::cout << Even(N);
    else
        std::cout << Odd(N);

    return 0;
}