#include <iostream>
using namespace std;

int main() {
    int N, M;
    int sum = 0;
    std::cin >> N;

    for (int i=0; i<N; i++) {
        std::cin >> M;
        if ((M%2!=0) && (M%3==0))
            sum += M;
    }

    std::cout << sum;

    return 0;
}