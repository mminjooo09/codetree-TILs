#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt=0;
    std::cin >> N;
    int rlt = N;

    for (int i=1; i<=N; i++) {
        rlt /= i;
        cnt++;
        
        if (rlt<=1) {
            std::cout << cnt;
            break;
        }
    }

    return 0;
}