#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    std::cin >> A;

    string B;
    int A_cnt = 1;
    for (int i=0; i<A.length(); i++) {
        if (A[i] == A[i+1]) {
            A_cnt++;
        }
        else {
            B += A[i];
            B += to_string(A_cnt);
            A_cnt = 1;
        }
    }

    std::cout << B.length() << endl;
    for (int i=0; i<B.length(); i++)
        std::cout << B[i];

    return 0;
}
