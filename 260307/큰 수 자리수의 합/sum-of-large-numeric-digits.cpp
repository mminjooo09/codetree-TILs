#include <iostream>
using namespace std;

int F(int n) {
    if (n<10)
        return n;

    return n%10 + F(n/10);
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int n = a*b*c;
    std::cout << F(n);

    return 0;
}