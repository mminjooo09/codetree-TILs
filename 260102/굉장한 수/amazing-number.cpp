#include <iostream>
using namespace std;

int main() {
    int N;

    std::cin >> N;

    if (N%2==1 && N%3==0) {
        std::cout << "true";
    }
    else if (N%2==0 && N%5==0) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }

    return 0;
}