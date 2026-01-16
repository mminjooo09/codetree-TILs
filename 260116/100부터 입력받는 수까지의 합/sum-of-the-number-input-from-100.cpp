#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    std::cin >> N;

    for (int i=N; i<=100; i++) {
        sum += i;
    }

    std::cout << sum;

    return 0;
}