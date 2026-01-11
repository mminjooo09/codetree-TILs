#include <iostream>
using namespace std;

int main() {
    int sex, age;   // 남자0, 여자1
    std::cin >> sex >> age;

    if (sex == 0) {
        if (age >= 19)
            std::cout << "MAN";
        else
            std::cout << "BOY";
    }
    else
        if (age >= 19)
            std::cout << "WOMAN";
        else
            std::cout << "GIRL";

    return 0;
}