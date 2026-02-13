#include <iostream>
using namespace std;

int main() {
    int N, M;
    std::cin >> N >> M;

    int num=1;
    int arr[N][M] = {};
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            arr[i][j] = num;
            std::cout << arr[i][j] << " ";
            num++;
        }
        std::cout << endl;
    }
    
    return 0;
}