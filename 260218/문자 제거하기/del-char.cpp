#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    std::cin >> S;

    int len = S.length();

    while (len > 1) {
        int a;
        std::cin >> a;

        if (a >= len)
            a = len-1;
        
        S.erase(a, 1);
        len--;

        std::cout << S << endl;
    }

    return 0;
}
