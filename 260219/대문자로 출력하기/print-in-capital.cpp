#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    std::cin >> s;

    // 방법 2
    for (int i=0; i<s.length(); i++) {
        if (isalpha(s[i]) != 0)
            std::cout << (char)toupper(s[i]);
    }
    
    /* 방법 1
    for (int i=0; i<s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'z')
            std::cout << (char)toupper(s[i]);
    }
    */

    return 0;
}