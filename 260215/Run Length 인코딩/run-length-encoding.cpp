#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    std::cin >> A;

    string B = "";

    char curr = A[0];
    int num = 1;
    for (int i=1; i<A.length(); i++) {
        if (A[i] == curr) {
            num++;
        }
        else {
            B += curr;
            B += to_string(num);
            curr = A[i];
            num = 1;
        }
    }

    B += curr;
    B += to_string(num);

    std::cout << B.length() << endl;
    std::cout << B;

    return 0;
}
