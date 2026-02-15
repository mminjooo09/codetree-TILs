#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N][N] = {};
    for (int i=0; i<N; i++) {
        for (int j=0; j<=i; j++) {
            if (j==0 || i==j)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<=i; j++) {
            std::cout << arr[i][j] << " ";
        }

        std::cout << endl;
    }

    return 0;
}

/*
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44

00 01 22 33 44
*/