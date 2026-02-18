#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    std::cin >> A >> B;

    int A_len = A.length();
    int B_len = B.length();
    for (int i=0; i<B_len; i++) {
        if (B[i] == 'L')
            A = A.substr(1, A_len-1) + A.substr(0, 1);
        else if (B[i] == 'R')
            A = A.substr(A_len-1, 1) + A.substr(0, A_len-1);
    }

    std::cout << A;
    
    return 0;
}