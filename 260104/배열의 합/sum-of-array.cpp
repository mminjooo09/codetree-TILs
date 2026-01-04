#include <iostream>
using namespace std;

int main() {
    int row = 4;
    int col = 4;
    int array[row][col];

    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            std::cin >> array[i][j];
            sum += array[i][j];
        }
        std::cout << sum << endl;
    }

    return 0;
}