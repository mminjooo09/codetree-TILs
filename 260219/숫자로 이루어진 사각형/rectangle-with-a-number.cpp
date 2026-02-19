#include <iostream>
using namespace std;

void Square(int n) {
    int cnt = 1;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (cnt == 10)
                cnt = 1;
            
            std::cout << cnt << " ";
            cnt++;
        }
        std::cout << endl;
    }
}

int main() {
    int n;
    std::cin >> n;

    Square(n);

    return 0;
}