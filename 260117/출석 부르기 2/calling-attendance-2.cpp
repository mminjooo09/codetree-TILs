#include <iostream>
using namespace std;

int main() {
    int N;

    for (;;) {
        std::cin >> N;

        if (N==1)
            std::cout << "John" << endl;
        else if (N==2)
            std::cout << "Tom" << endl;
        else if (N==3)
            std::cout << "Paul" << endl;
        else if (N==4)
            std::cout << "Sam" << endl;
        else {
            std::cout << "Vacancy" << endl;
            break;
        }
    }

    return 0;
}