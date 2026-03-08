#include <iostream>
using namespace std;

int CNT(int n) {
    int cnt = 0;

    if (n==1)
        return 0;

    if (n%2==0)
        return 1 + CNT(n/2);
    else
        return 1 + CNT(n*3+1);
}

int main() {
    int N;
    std::cin >> N;

    std::cout << CNT(N);

    return 0;
}