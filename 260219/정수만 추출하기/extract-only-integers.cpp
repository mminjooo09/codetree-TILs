#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    std::cin >> A >> B;

    string a, b;
    for (int i=0; i<A.length(); i++) {
        if (isdigit(A[i]) != 0)
            a += A[i];
        else
            break;
    }

    for (int i=0; i<B.length(); i++) {
        if (isdigit(B[i]) != 0)
            b += B[i];
        else
            break;
    }

    std::cout << stoi(a) + stoi(b);

    return 0;
}