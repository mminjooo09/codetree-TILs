#include <iostream>
#include <string>
using namespace std;

bool MagicNumber(int n) {
    string s = to_string(n);
    if (n%2==0 && ((s[0]-'0'+s[1]-'0')%5==0))
        return true;
    else
        return false;
}

int main() {
    int n;
    std::cin >> n;

    if (MagicNumber(n))
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}