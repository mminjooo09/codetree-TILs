#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    std::cin >> str;

    bool ee = false;
    bool ab = false;
    
    // 방법 3
    for (int i=0; i<str.length()-1; i++) {
        if (str.find("ee") != string::npos)
            ee = true;
        if (str.find("ab") != string::npos)
            ab = true;        
    }
    
    /* 방법 2
    for (int i=0; i<str.length()-1; i++) {
        if (str.substr(i, 2) == "ee")
            ee = true;
        if (str.substr(i, 2) == "ab")
            ab = true;        
    }
    */
    
    /* 방법 1
    for (int i=0; i<str.length()-1; i++) {
        if (str[i]=='e' && str[i+1]=='e')
            ee = true;
        if (str[i]=='a' && str[i+1]=='b')
            ab = true;   
    }
    */

    if (ee == false)
        std::cout << "No" << " ";
    else
        std::cout << "Yes" << " ";
    if (ab == false)
        std::cout << "No" << " ";
    else
        std::cout << "Yes" << " ";

    return 0;
}