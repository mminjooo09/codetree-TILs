#include <iostream>
using namespace std;

int F(int n) {
    if (n==1)
        return 1;
    


    return n * F(n-1);
}

int main() {
    int N;
    std::cin >> N;

    std::cout << F(N);

    return 0;
}