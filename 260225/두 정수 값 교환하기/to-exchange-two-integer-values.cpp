#include <iostream>
using namespace std;

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    Swap(n, m);

    std::cout << n << " " << m;
    
    return 0;
}