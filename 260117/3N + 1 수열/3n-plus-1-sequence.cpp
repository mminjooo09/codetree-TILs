#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt=0;
    std::cin >> N;
    
    for (;;) {
        if (N==1) {
            std::cout << cnt;
            break;
        }

        if (N%2==0) {
            N /= 2;
            cnt++;
        }
        else {
            N = (N*3) + 1;
            cnt++;
        }
    }

    return 0;
}