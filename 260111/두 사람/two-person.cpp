#include <iostream>
using namespace std;

int main() {
    int a_age, b_age;
    char a_sex, b_sex;
    std::cin >> a_age >> a_sex >> b_age >> b_sex;

    if ((a_age >= 19) && (a_sex == 'M'))
        std::cout << 1;
    else if ((b_age >= 19) && (b_sex == 'M'))
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}