#include <iostream>
using namespace std;

void LMC(int n, int m) {
    int lmc = 0;

    for (int i=max(n, m);; i++) {
        if (i%n==0 && i%m==0) {
            lmc = i;
            break;
        }
    }

    std::cout << lmc;
    
}

int main() {
    int n, m;
    std::cin >> n >> m;

    LMC(n, m);

    return 0;
}