#include <iostream>
using namespace std;

int main() {
    int score;
    std::cin >> score;

    std::cout << (score == 100 ? "pass" : "failure");

    return 0;
}