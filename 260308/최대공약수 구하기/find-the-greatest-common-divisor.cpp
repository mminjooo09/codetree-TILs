#include <iostream>
using namespace std;

// 유클리드 호제법
int GCD(int n, int m) {
    if (m==0)
        return n;

    return GCD(m, n%m);
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::cout << GCD(n, m);

    return 0;
}