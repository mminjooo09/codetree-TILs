#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    std::cin >> score;
    string n;

    n = score == 100 ? "pass" : "failure";

    std::cout << n;
    
    return 0;
}