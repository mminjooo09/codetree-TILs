#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;
    std::cout << A << " ";

    while (A <= B) {
        if (A%2==1)
            A *= 2;
        else
            A += 3;
        
        if (A > B)
            break;
            
        std::cout << A << " ";
    }

    return 0;
}