#include <iostream>
using namespace std;

int main() {
    int score;
    std::cin >> score;

    for (score; score <= 100; score++) {
        if (score >= 90) {
            std::cout << "A";
        }
        else if (score >= 80) {
            std::cout << "B";
        }
        else if (score >= 70) {
            std::cout << "C";
        }
        else if (score >= 60) {
            std::cout << "D";
        }
        else {
            std::cout << "F";
        }
        std::cout << " ";
    }

    return 0;
}