#include <iostream>
using namespace std;

int main() {
    int h, w, b;
    
    std::cin >> h >> w;
    b = (10000*w)/(h*h);

    std::cout << b << endl;
    if (b >= 25)
        std::cout << "Obesity";
    
    return 0;
}