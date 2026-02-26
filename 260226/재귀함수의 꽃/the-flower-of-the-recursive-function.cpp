#include <iostream>
using namespace std;

void PrintNum(int n) {
    if (n==0)
        return;
        
    std::cout << n << " ";
    PrintNum(n-1);
    std::cout << n << " ";
}

int main() {
    int N;
    std::cin >> N;

    PrintNum(N);

    return 0;
}