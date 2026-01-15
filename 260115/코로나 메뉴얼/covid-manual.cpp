#include <iostream>
using namespace std;

int main() {
    char a[3];
    int b[3];
    int cnt = 0;
    
    for (int i=0; i<3; i++) {
        std::cin >> a[i] >> b[i];
    }

    for (int i=0; i<3; i++) {
        if (a[i]=='Y' && b[i]>=37)
            cnt++;
    }

    if (cnt >= 2) {
        std::cout << 'E';
    }
    else
        std::cout << 'N';

    return 0;
}