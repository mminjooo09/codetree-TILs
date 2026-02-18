#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    std::cin >> S;

    S = S.substr(0, 1) + S.substr(2);
    S = S.erase(S.length()-2, 1);

    std::cout << S;

    return 0;
}