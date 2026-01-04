#include <iostream>
using namespace std;

int main() {
    int array1[3][3];
    int array2[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> array1[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> array2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array2[i][j] *=array1[i][j];
            std::cout << array2[i][j] << " ";
        }
        std::cout << endl;
    }

    return 0;
}