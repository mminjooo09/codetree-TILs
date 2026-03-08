#include <iostream>
using namespace std;

int Seq(int n) {
    if (n==1)
        return 1;
    if (n==2)
        return 2;
    
    return Seq(n/3) + Seq(n-1);
}

int main() {
    int n;
    std::cin >> n;

    std::cout << Seq(n);

    return 0;
}