#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int array[N][N];  // [i][j]

    for (int j = 0; j < N; j++) {
        int cnt = 1;

        if (j % 2 == 0) {
            for (int i = 0; i < N; i++) {
                array[i][j] = cnt;
                cnt++;
            }
        }
        else {
            for (int i = N-1; i >= 0; i--) {
                array[i][j] = cnt;
                cnt++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << array[i][j];
        }
        std::cout << endl;
    }

    return 0;
}