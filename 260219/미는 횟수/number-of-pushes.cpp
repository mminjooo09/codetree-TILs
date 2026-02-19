#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    std::cin >> A >> B;

    int n = 0;
    int len = A.length();
    
    while (A != B) {
        A = A.substr(len-1, 1) + A.substr(0, len-1);
        n++;

        if (n == len) {
            n = -1;
            break;
        }
    }

    std::cout << n;

    return 0;
}