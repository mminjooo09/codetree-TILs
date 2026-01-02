#include <iostream>
using namespace std;

int main() {
    int sex, age;

    std::cin >> sex >> age;

    if (sex == 1) { // 여자
        if (age >= 19) {
            std::cout << "WOMAN";
        }
        else {
            std::cout << "GIRL";
        }
    }
    else {          // 남자
        if (age >= 19) {
            std::cout << "MAN";
        }
        else {
            std::cout << "BOY";
        }
    }

    return 0;
}