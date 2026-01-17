#include <iostream>
using namespace std;

int main() {
    int N;
    bool satisfied = false;
    std::cin >> N;

    for (int i=2; i<N; i++) {
        if (N%i==0)
            satisfied = true;
    }

    if (satisfied == true)
        std::cout << "C";
    else
        std::cout << "N";
    
    return 0;
}