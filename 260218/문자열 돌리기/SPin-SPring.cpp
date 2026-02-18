#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    std::cin >> s;
    std::cout << s << endl;

    int l = s.length();

    for (int i=0; i<l; i++) {
        s = s.substr(l-1, 1) + s.substr(0, l-1);
        std::cout << s << endl;
    }

    return 0;
}