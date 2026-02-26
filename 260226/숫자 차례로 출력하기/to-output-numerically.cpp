#include <iostream>
using namespace std;

void PrintUp(int n) {
    if(n==0)
        return;

    PrintUp(n-1);
    std::cout << n << " ";
}

void PrintDown(int n) {
    if (n==0)
        return;

    std::cout << n << " ";
    PrintDown(n-1);
}

int main() {
    int N;
    std::cin >> N;

    PrintUp(N);
    std::cout << endl;
    PrintDown(N);

    return 0;
}

