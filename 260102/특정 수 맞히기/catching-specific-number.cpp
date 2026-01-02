#include <iostream>
using namespace std;

int main() {
    int N;

    for (int i = 0 ; i <= 100 ; i++) {
        std::cin >> N;
        if (N < 25) {
            std::cout << "Higher" << endl;
        }
        else if (N > 25) {
            std::cout << "Lower" << endl;
        }
        else {
            std::cout << "Good";
            break;
        }
    }

    return 0;
}