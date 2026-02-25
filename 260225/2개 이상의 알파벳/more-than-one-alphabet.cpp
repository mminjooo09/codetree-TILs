#include <iostream>
#include <string>
using namespace std;

bool Different(string &A) {
    for (int i=0; i<A.length()-1; i++) {
        if (A[i] != A[i+1])
            return false;
    }

    return true;
}

int main() {
    string A;
    std::cin >> A;

    if (Different(A))
        std::cout << "No";
    else
        std::cout << "Yes";

    return 0;
}