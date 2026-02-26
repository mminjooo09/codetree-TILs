#include <iostream>
using namespace std;

int PrintSum(int n) {
    if (n==1)
        return 1;

    return PrintSum(n-1) + n;
}

int main() {
    int N;
    std::cin >> N;

    std::cout << PrintSum(N);

    return 0;
}