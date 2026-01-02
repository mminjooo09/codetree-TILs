#include <iostream>
using namespace std;

int main() {
    int array[10];
    int cnt_3 = 0;
    int cnt_5 = 0;

    for (int i = 0; i < 10; i++) {
        std::cin >> array[i];
    }

    for (int i = 0; i < 10; i++) {
        if (array[i]%3==0)
            cnt_3 += 1;
        if (array[i]%5==0)
            cnt_5 += 1;
    }

    std::cout << cnt_3 << " " << cnt_5;

    return 0;
}