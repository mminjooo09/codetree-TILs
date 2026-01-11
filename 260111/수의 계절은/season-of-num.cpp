#include <iostream>
using namespace std;

int main() {
    int M;
    std::cin >> M;

    if (M>=12 || M<=2)
        std::cout << "Winter";
    else if (M<=5)
        std::cout << "Spring";
    else if (M<=8)
        std::cout << "Summer";
    else
        std::cout << "Fall";
    
    return 0;
}