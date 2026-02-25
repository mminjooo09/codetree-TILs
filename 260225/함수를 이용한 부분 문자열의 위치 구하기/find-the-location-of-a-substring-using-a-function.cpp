#include <iostream>
#include <string>
using namespace std;

string text;
string pattern;

int Exist() {
    if (text.find(pattern) != string::npos)
        return text.find(pattern);
    else
        return -1;
}


int main() {
    std::cin >> text >> pattern;

    std::cout << Exist();

    return 0;
}