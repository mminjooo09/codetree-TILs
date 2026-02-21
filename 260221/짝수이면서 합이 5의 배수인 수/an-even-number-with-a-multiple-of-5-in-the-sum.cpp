#include <iostream>
#include <string>
using namespace std;

bool MagicNumber(int n) {
    return n%2==0 && ((n/10)+(n%10))%5==0;
}

int main() {
    int n;
    std::cin >> n;

    if (MagicNumber(n))
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}