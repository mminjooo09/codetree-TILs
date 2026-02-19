#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B, a, b;
    std::cin >> A >> B;

    for (int i=0; i<A.length(); i++) {
        if (isdigit(A[i]) != 0)
            a += A[i];
    }

    for (int i=0; i<B.length(); i++) {
        if (isdigit(B[i]) != 0)
            b += B[i];
    }

    std::cout << stoi(a) + stoi(b);

    return 0;
}