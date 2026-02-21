#include <iostream>
using namespace std;

int rlt;

bool Operation(int a, char o, int c) {
    if (o == '+')
        rlt = a + c;
    else if (o == '-')
        rlt = a - c;
    else if (o == '/')
        rlt = a / c;
    else if (o == '*')
        rlt = a * c;
    else
        return false;
    
    return true;
}

int main() {
    int a, c;
    char o;
    std::cin >> a >> o >> c;

    if (Operation(a, o, c))
        std::cout << a << " " << o << " " << c << " = "<< rlt;
    else
        std::cout << "False";
    
    return 0;
}