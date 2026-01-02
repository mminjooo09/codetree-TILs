#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt = 0;
    std::cin >> N;

    for (int i = 0; i < 100; i++) {
        cnt += i+1;
        if (cnt >= N) {
            std::cout << i+1;
            break;
        }
    }

    return 0;
}