#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    std::cin >> s;

    for (int i=0; i<s.length(); i++) {
        if (s.find('e') != string::npos) {
            s = s.erase(s.find('e'), 1);
            break;
        }
    }

    std::cout << s;
    
    return 0;
}