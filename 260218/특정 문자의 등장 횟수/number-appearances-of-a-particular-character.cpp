#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    std::cin >> str;

    int ee_cnt = 0, eb_cnt = 0;
    for (int i=0; i<str.length()-1; i++) {
        if (str[i] == 'e' && str[i+1] == 'e')
            ee_cnt++;
        if (str.substr(i, 2) == "eb")
            eb_cnt++;
    }

    std::cout << ee_cnt << " " << eb_cnt;

    return 0;
}