#include <iostream>
using namespace std;

int main() {
    int gap=-1, cnt=0;

    // 원소 입력
    int N1, N2;
    std::cin >> N1 >> N2;

    // 배열 입력
    int A[N1], B[N2];
    for (int i=0; i<N1; i++)
        std::cin >> A[i];
    for (int j=0; j<N2; j++)
        std::cin >> B[j];

    // 시작점 차이 계산
    for (int i=0; i<N1; i++) {
        if (A[i]==B[0]) {
            gap=i;
            break;
        }
    }

    if (gap==-1)
        std::cout << "No";
    else {
        for (int j=0; j<N2; j++) {
            if (B[j]==A[j+gap]) {
                cnt++;
            }
        }

        if (cnt == N2)
            std::cout << "Yes";
        else
            std::cout << "No";
    }

    return 0;
}