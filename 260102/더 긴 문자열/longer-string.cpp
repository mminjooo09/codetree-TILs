#include <iostream>
using namespace std;

int main() {
    string a, b;
    std::cin >> a >> b;

    int a_len = a.length();
    int b_len = b.length();

    if (a_len > b_len) {
        std::cout << a << " " << a_len;
    }
    else if (a_len < b_len) {
        std::cout << b << " " << b_len;
    }
    else if (a_len == b_len) {
        std::cout << "same";
    }

    return 0;
}