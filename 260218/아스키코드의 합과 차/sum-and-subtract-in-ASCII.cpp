#include <iostream>
#include <string>
using namespace std;

int main() {
    char A, B;
    std::cin >> A >> B;

    int a = (int)A;
    int b = (int)B;

    if (a>b)
        std::cout << a+b << " " << a-b;
    else
        std::cout << b+a << " " << b-a;

    return 0;
}