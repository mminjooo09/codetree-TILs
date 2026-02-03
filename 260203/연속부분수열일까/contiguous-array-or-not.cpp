#include <iostream>
using namespace std;

int main() {
    int success = false;
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
    for (int i=0; i<=N1-N2; i++) {
        int cnt=0;

        for (int j=0; j<N2; j++) {
            if (A[i+j] == B[j])
                cnt++;
            else
                break;
        }

        if (cnt==N2)
            success = true;
    }

    if (success)
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}