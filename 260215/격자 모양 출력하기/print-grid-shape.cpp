#include <iostream>
using namespace std;

int main() {
    int N, M;
    std::cin >> N >> M;

    int arr[N][N] = {};
    for (int i=0; i<M; i++) {
        int x, y;
        std::cin >> x >> y;

        arr[x-1][y-1] = x * y;
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++)
            std::cout << arr[i][j] << " ";
        
        std::cout << endl;
    }

    return 0;
}