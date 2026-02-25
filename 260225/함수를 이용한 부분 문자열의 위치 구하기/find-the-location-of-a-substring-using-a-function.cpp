#include <iostream>
#include <string>
using namespace std;

string text;
string pattern;

bool Substr(int i) {
    for (int j=0; j<pattern.size(); j++) {
        if (text[i+j]!=pattern[j])
            return false;
    }

    return true;
}

int Index() {
    for (int i=0; i<=text.size()-pattern.size(); i++) {
        if (Substr(i))
            return i;
    }

    return -1;
}


int main() {
    std::cin >> text >> pattern;

    std::cout << Index();

    return 0;
}