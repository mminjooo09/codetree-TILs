#include <iostream>
using namespace std;

int main() {
    int N, M;
    std::cin >> N >> M;

    int num = 1;
    int arr[N][M] = {};
    for (int i=0; i<=N+M-2; i++) {   // sum
        int x=0, y=0;
        for (int j=0; j<=i; j++) {  // N
            x = j;
            y = i - j;
            
            if (x<N && y<M) {
                arr[x][y] = num;
                num++;
            }
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++)
            std::cout << arr[i][j] << " ";
        
        std::cout << endl;
    }

    return 0;
}

/*
arr[N][M] (4, 7)
00 01 02 03 04 05 06
10 11 12 13 14 15 16
20 21 22 23 24 25 26
30 31 32 33 34 35 36

00
01 10
02 11 20
03 12 21 30
04 13 22 31
05 14 23 32
06 15 24 33
16 25 34
26 35
36
*/