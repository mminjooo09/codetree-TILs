#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    std::cin >> s;

    int len = s.length();
    s = s.substr(1, len-1) + s.substr(0, 1);

    std::cout << s;

    return 0;
}