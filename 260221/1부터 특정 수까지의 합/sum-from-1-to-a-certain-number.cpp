#include <iostream>
using namespace std;

int DIV(int N) {
    int sum = 0;
    for (int i=1; i<=N; i++) {
        sum += i;
    }

    return sum / 10;
}
int main() {
    int N;
    std::cin >> N;

    int rlt = DIV(N);

    std::cout << rlt;

    return 0;
}