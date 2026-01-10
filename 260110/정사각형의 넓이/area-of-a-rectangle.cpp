#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    std::cout << N*N << endl;
    if (N < 5)
        std::cout << "tiny";
    
    return 0;
}