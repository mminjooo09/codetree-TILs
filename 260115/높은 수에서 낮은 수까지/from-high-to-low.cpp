#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;
    
    if (A>B) {
        for (int i=A; i>=B; i--)
            std::cout << i << " ";
    }
    else
        for (int i=B; i>=A; i--)
            std::cout << i << " ";  

    return 0;
}