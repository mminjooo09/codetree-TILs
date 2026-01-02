#include <iostream>
using namespace std;

int main() {
    string a;
    std::cin >> a;

    int a_len = a.length();

    a[1] = 'a';
    a[a_len-2] = 'a';

    std::cout << a;

    return 0;
}