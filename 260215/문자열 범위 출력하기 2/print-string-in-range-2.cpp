#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;
    std::cin >> str >> n;

    int cnt = 0;
    for (int i=str.length()-1; i>=0; i--) {
        std::cout << str[i];
        cnt++;
        if (cnt==n)
            break;
    }
    
    return 0;
}