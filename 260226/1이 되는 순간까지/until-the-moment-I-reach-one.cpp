#include <iostream>
using namespace std;

int F(int n) {
    if (n==1)
        return 0;

    if (n%2==0)
        return F(n/=2) + 1;
    else
        return F(n/=3) + 1;
}

int main() {
    int N;
    std::cin >> N;

    std::cout << F(N);    

    return 0;
}