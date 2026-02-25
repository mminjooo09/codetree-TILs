#include <iostream>
#include <string>
using namespace std;

bool Palindrome(string &a) {
    string b;

    for (int i=a.length()-1; i>=0; i--)
        b += a[i];

    if (a == b)
        return true;
    
    return false;
}

int main() {
    string A;
    std::cin >> A;

    if (Palindrome(A))
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}