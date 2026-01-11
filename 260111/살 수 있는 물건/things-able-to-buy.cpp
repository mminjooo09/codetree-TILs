#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    if (N >= 3000)
        std::cout << "book";
    else if (N >= 1000)
        std::cout << "mask";
    else
        std::cout << "no";
    
    return 0;
}