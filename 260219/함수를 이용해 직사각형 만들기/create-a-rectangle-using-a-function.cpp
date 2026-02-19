#include <iostream>
using namespace std;

void PrintStar (int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            std::cout << "1";

        std::cout << endl;
    }
}

int main() {
    int x, y;
    std::cin >> x >> y;

    PrintStar(x, y);
    
    return 0;
}