#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N][N];
    int num = 1;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            arr[j][i] = num;
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