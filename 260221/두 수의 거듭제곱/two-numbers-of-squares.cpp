#include <iostream>
using namespace std;

void Square(int a, int b) {
    int rlt = 1;
    for (int i=1; i<=b; i++)
        rlt *= a;
    
    std::cout << rlt;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    Square(a, b);

    return 0;
}