#include <iostream>
using namespace std;

int main() {
    int a_age, b_age;
    char a_sex, b_sex;
    std::cin >> a_age >> a_sex >> b_age >> b_sex;

    if ((a_age < 19) || (b_age < 19))
        std::cout << 0;
    else if ((a_sex == 'M') || (b_sex == 'M'))
        std::cout << 1;

    return 0;
}