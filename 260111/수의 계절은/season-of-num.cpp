#include <iostream>
using namespace std;

int main() {
    int M;
    std::cin >> M;

    if ((M>=3) && (M<=5))
        std::cout << "Spring";
    else if ((M>=6) && (M<=8))
        std::cout << "Summer";
    else if ((M>=9) && (M<=11))
        std::cout << "Fall";
    else
        std::cout << "Winter";
    
    return 0;
}