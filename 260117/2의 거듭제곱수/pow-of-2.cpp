#include <iostream>
using namespace std;

int main() {
    int N;
    int x=0;
    std::cin >> N;

    for (;;) {
        N /= 2;
        x++;

        if (N==1) {
            std::cout << x;
            break;
        }
    }
    
    return 0;
}