#include <iostream>
using namespace std;

int main() {
    int x, y;
    char c;

    for (;;) {
        std::cin >> x >> y >> c;
            
        std::cout << x*y << endl;

        if (c=='C')
            break;
    }

    return 0;
}