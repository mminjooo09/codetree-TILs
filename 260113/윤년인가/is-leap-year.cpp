#include <iostream>
using namespace std;

int main() {
    int Y;
    std::cin >> Y;

    if ((Y%4!=0) || ((Y%100==0) && (Y%400!=0)))
        std::cout << "false";
    else
        std::cout << "true";

    return 0;
}