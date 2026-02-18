#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    std::cin >> A;

    char first = A[0];
    char second = A[1];
    for (int i=0; i<A.length(); i++) {
        if (A[i] == first)
            A[i] = second;
        else if (A[i] == second)
            A[i] = first;
    }

    std::cout << A;

    return 0;
}