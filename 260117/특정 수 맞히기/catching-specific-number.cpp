#include <iostream>
using namespace std;

int main() {
    int N;

    for (;;) {
        std::cin >> N;

        if (N<25)
            std::cout << "Higher" << endl;
        else if (N>25)
            std::cout << "Lower" << endl;
        else {
            std::cout << "Good" << endl;
            break;
        }
    }

    return 0;
}