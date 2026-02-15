#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N][N] = {};
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (i==0 || j==0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j] + arr[i][j-1] + arr[i-1][j-1];
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            std::cout << arr[i][j] << " ";
        }

        std::cout << endl;
    }

    return 0;
}