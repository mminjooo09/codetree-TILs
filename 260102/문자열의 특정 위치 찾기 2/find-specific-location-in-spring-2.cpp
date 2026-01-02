#include <iostream>
using namespace std;

int main() {
    string array[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    int cnt = 0;

    std::cin >> a;

    for (int i = 0; i < 5; i++) {
        if ((array[i][2]==a) || (array[i][3]==a)) {
            std::cout << array[i] << endl;
            cnt++;
        }
    }

    std::cout << cnt;

    return 0;
}