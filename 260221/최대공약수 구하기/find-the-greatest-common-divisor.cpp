#include <iostream>
using namespace std;

void GCD(int n, int m) {
    int gcd = 0;
    
    for (int i=1; i<=min(n, m); i++) {
        if (n%i==0 && m%i==0)
            gcd = i;
    }

    std::cout << gcd;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    GCD(n, m);

    return 0;
}