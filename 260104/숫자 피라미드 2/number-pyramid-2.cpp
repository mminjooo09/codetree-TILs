#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int cnt = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cnt++;
            std::cout << cnt << " ";
        }
        std::cout << endl;
    }
    return 0;
}