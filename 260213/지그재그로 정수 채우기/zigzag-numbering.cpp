#include <iostream>
using namespace std;

int main() {
    int N, M;
    std::cin >> N >> M;

    int arr[N][M] = {};
    int num = 0;
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            if (i%2==0)
                arr[j][i] = num;
            else
                arr[N-j-1][i] = num;
            num++;
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            std::cout << arr[i][j] << " ";
        }

        std::cout << endl;
    }

    return 0;
}
