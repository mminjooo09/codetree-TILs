#include <iostream>
using namespace std;

int main() {
    int M, N;
    std::cin >> M;

    for (int i=1; i<=M; i++) {
        int cnt=0;
        std::cin >> N;

        while (N!=1) {
            if (N%2==0) {
                N /= 2;
                cnt++;
            }
            else {
                N = N*3+1;
                cnt++;
            }
        }
        std::cout << cnt << endl;
    }

    return 0;
}