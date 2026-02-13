#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N][N] = {};
    int num = 1;
    for (int i=N-1; i>=0; i--) {
        for (int j=N-1; j>=0; j--) {
            if (N%2==0) {
                if (i%2==0)
                    arr[N-j-1][i] = num;
                else
                    arr[j][i] = num;
            }
            else {
                if (i%2==0)
                    arr[j][i] = num;
                else
                    arr[N-j-1][i] = num;
            }
            num++;
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++)
            std::cout << arr[i][j] << " ";

        std::cout << endl;
    }

    return 0;
}