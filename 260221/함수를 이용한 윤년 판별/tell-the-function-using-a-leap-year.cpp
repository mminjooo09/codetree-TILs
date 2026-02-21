#include <iostream>
using namespace std;

bool IsLeapYear(int y) {
    if (y%4!=0 || (y%100==0 && y%400!=0))
        return false;
    
    return true;
}

int main() {
    int y;
    std::cin >> y;

    if (IsLeapYear(y))
        std::cout << "true";
    else
        std::cout << "false";
    
    return 0;
}