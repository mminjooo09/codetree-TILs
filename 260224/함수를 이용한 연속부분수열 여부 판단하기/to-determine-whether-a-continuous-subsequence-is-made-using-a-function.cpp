#include <iostream>
using namespace std;

int A, B;
int arrA[100], arrB[100];

bool IsSame(int n) {
    for (int i=0; i<B; i++) {
        if (arrA[i+n] != arrB[i])
            return false;
    }
    
    return true;
}

bool IsSubSequence() {
    for (int i=0; i<=A-B; i++) {
        if (IsSame(i))
            return true;
    }
    
    return false;
}

int main() {
    std::cin >> A >> B;

    for (int i=0; i<A; i++)
        std::cin >> arrA[i];

    for (int i=0; i<B; i++)
        std::cin >> arrB[i];

    if (IsSubSequence())
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}