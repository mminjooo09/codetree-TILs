#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char c;
    std::cin >> str >> c;

    int start_idx = -1;
    
    // 방법 2
    for (int i=0; i<str.length(); i++) {
        if (str.find(c) != string::npos) {
            start_idx = str.find(c);
            break;
        }
    }    

    /* 방법 1
    for (int i=0; i<str.length(); i++) {
        if (str[i]==c) {
            start_idx = i;
            break;
        }
    }
    */

    if (start_idx == -1)
        std::cout << "No";
    else
        std::cout << start_idx;

    return 0;
}