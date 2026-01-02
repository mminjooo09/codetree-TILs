#include <iostream>
using namespace std;

int main() {
    int a, b;
    std::cin >> a >> b;
    int array[10] = {a, b};

    for (int i = 2; i < 10; i++) {
        array[i] = (array[i-1] + array[i-2]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}