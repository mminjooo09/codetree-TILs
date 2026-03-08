#include <iostream>
using namespace std;

int Seq(int n) {
    if (n==1)
        return 2;
    if (n==2)
        return 4;

    return (Seq(n-1)*Seq(n-2))%100;
}

int main() {
    int n;
    std::cin >> n;

    std::cout << Seq(n);

    return 0;
}