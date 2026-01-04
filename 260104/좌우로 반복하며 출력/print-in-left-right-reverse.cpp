#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int arr[N][N];

    for (int i = 0; i < N; i++) {
        int cnt = 1;

        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                arr[i][j] = cnt;
                cnt++;
            }
        }
        else {
            for (int j = N-1; j >= 0; j--) {
                arr[i][j] = cnt;
                cnt++;
            }
        }

        for (int j = 0; j < N; j++) {
            std::cout << arr[i][j];
        }

        std::cout << endl;
    }

    return 0;
}