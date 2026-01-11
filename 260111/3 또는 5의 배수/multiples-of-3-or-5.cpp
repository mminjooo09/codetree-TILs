#include <iostream>
using namespace std;

int main() {
    int A;
    std::cin >> A;

    if (A % 3 == 0)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
    
    if (A % 5 == 0)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}