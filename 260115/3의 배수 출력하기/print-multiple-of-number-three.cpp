#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt = 1;
    std::cin >> N;

    while (cnt<=N) {
        if (cnt%3==0) {
            std::cout << cnt << " ";
        }
        cnt++;
    }

    return 0;
}