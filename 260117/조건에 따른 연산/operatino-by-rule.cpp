#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt = 0;
    std::cin >> N;

    for (;;) {
        if (N%2==0) {
            N = (N*3) + 1;
            cnt++;
        }
        else {
            N = (N*2) + 2;
            cnt++;
        }

        if (N >= 1000) {
            std::cout << cnt;
            break;
        }
    }
    
    return 0;
}