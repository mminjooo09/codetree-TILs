#include <iostream>
using namespace std;

int main() {
    int N;
    bool satisfied = true;
    std::cin >> N;

    for (int i=2; i<N; i++) {
        if (N%i==0)
            satisfied = false;
    }

    if (satisfied == true)
        std::cout << "P";
    else
        std::cout << "C";

    return 0;
}