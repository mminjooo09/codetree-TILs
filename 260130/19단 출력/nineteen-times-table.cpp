#include <iostream>
using namespace std;

int main() {
    for (int i=1; i<=19; i++) {
        for (int j=1; j<=19; j++) {
            std::cout << i << " * " << j << " = " << i*j;
            if (j%2==0)
                std::cout << endl;
            else if (j==19)
                continue;
            else
                std::cout << " / ";
        }
        std::cout << endl;
    }

    return 0;
}