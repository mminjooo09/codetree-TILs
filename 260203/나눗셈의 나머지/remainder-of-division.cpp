#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;
    int R=0; // R:나머지
    int cnt[10]={};
    int rlt=0;

    for (int i=0; i<100; i++) {
        R = A%B;
        A = A/B;

        cnt[R]++;

        if (A<=1)
            break;
    }

    for (int i=0; i<10; i++) {
        cnt[i] *= cnt[i];
        rlt += cnt[i];
    }

    std::cout << rlt;
    
    return 0;
}