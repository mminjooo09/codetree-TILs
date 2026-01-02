#include <iostream>
using namespace std;

int main() {
    int A, B;

    std::cin >> A >> B;
    
    double average = ((double)A + (double)B)/2;

    std::cout << fixed;
    std::cout.precision(1);
    std::cout << A+B << " " << average;

    return 0;
}