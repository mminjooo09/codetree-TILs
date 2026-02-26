#include <iostream>
using namespace std;

int SquareSum(int n) {
    if (n<10)
        return n*n;

    return SquareSum(n/10) + (n%10)*(n%10);
}

int main() {
    int N;
    std::cin >> N;

    std::cout << SquareSum(N);

    return 0;
}