#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    std::cin >> s;

    for (int i=0; i<s.length(); i++) {
        if (isalpha(s[i]) != 0)
            std::cout << (char)tolower(s[i]);
        else if (isdigit(s[i]) != 0)
            std::cout << s[i];
    }

    return 0;
}