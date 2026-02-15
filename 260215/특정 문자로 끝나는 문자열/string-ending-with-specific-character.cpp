#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    char c;

    for (int i=0; i<10; i++)
        std::cin >> arr[i];
    std::cin >> c;

    bool cnt = false;
    for (int i=0; i<10; i++) {
        if (arr[i][arr[i].length()-1] == c) {
            std::cout << arr[i] << endl;
            cnt = true;
        }
    }

    if (cnt == false)
        std::cout << "None";

    return 0;
}