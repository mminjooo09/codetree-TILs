#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    char a, b;
    std::cin >> A;
    a = A[0];
    b = A[1];

    for (int i=0; i<A.length(); i++) {
        if (A[i] == b)
            A[i] = a;
    }

    std::cout << A;

    return 0;
}