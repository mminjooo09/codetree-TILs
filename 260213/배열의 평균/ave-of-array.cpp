#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    std::cout << fixed;
    std::cout.precision(1);

    int sum=0;
    for (int i=0; i<2; i++) {
        int i_sum=0;
        for (int j=0; j<4; j++) {
            std::cin >> arr[i][j];
            sum += arr[i][j];
            i_sum += arr[i][j];
        }
        std::cout << (double)i_sum/4 << " ";
    }
    std::cout << endl;

    for (int i=0; i<4; i++) {
        int j_sum=0;
        for (int j=0; j<2; j++) {
            j_sum += arr[j][i];
        }
        std::cout << (double)j_sum/2 << " ";
    }
    std::cout << endl << (double)sum/8;

    return 0;
}