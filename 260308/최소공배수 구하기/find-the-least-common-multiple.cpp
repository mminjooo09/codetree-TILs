#include <iostream>
using namespace std;

// 유클리드 호재
int GCD(int n, int m) {
    if (m==0)
        return n;
    
    return GCD(m, n%m);
}

int LMC(int n, int m) {
    return (n*m) / GCD(n, m);    
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::cout << LMC(n, m);

    return 0;
}