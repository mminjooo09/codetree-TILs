#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    std::cin >> s;

    for (int i=0; i<s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            std::cout << (char)toupper(s[i]);
        else if (s[i] >= 'A' && s[i] <= 'Z')
            std::cout << (char)tolower(s[i]);
    }

    return 0;
}