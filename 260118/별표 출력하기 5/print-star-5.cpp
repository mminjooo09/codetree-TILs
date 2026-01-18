#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=N; i>0; i--) {
        for (int j=i; j>0; j--) {
            for (int k=1; k<=i; k++) {
                std::cout << "*";
            }
            std::cout << " ";
        }
        std::cout << endl;
    }

    return 0;
}