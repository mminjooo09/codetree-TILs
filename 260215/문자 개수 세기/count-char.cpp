#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char c;

    getline(cin, str);
    std::cin >> c;

    int cnt=0;
    for (int i=0; i<str.length(); i++) {
        if (str[i]==c)
            cnt++;
    }

    std::cout << cnt;

    return 0;
}