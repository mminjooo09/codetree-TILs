#include <iostream>
using namespace std;

int min(int a, int b, int c) {
    int min_val = a;

    if (min_val > b)
        min_val = b;

    if (min_val > c)
        min_val = c;
    
    return min_val;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int rlt = min(a, b, c);
    std::cout << rlt;

    return 0;
}