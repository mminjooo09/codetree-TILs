#include <iostream>
using namespace std;

int min(int a, int b, int c) {
    if (a>b) {
        if (c>a)
            return b;
        else if (b>c)
            return c;
        else
            return b;
    }
    else if (b>c) {
        if (a>c)
            return c;
        else
            return a;
    }
    else
        return a;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int rlt = min(a, b, c);
    
    std::cout << rlt;

    return 0;
}