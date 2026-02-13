#include <iostream>
using namespace std;

int main() {
    int N, M;
    std::cin >> N >> M;

    int arr1[N][M];
    int arr2[N][M];
    int arr3[N][M];

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            std::cin >> arr1[i][j];
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            std::cin >> arr2[i][j];
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            if (arr1[i][j] == arr2[i][j])
                arr3[i][j] = 0;
            else
                arr3[i][j] = 1;
            
            std::cout << arr3[i][j] << " ";
        }
        std::cout << endl;
    }

    return 0;
}