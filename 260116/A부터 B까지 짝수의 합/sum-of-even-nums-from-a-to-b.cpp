#include <iostream>
using namespace std;

int main() {
    int A, B;
    int sum = 0;
    std::cin >> A >> B;

    for (int i=A; i<=B; i++) {
        if (i%2==0) {
            sum += i;
        }
    }

    std::cout << sum;

    return 0;
}