#include <iostream>
using namespace std;

int main() {
    int N;

    while (1) {
        std::cin >> N;

        if (N==0)
            break;
        else
            std::cout << N << endl;
    }

    return 0;
}