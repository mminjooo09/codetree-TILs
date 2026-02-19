#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;

    while (1) {
        string s;
        std::cin >> s;

        if (s == "END")
            break;

        for (int i=s.length()-1; i>=0; i--) {
            std::cout << s[i];
        }
        std::cout << endl;
    }
    return 0;
}