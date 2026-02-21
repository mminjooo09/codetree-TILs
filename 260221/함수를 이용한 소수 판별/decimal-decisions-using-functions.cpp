#include <iostream>
using namespace std;

bool isPrime(int N) {
    for (int i=2; i<N; i++) {
        if (N%i==0)
            return false;
    }

    return true;
}

int sum(int A, int B) {
    int sum = 0;
    for (int i=A; i<=B; i++) {
        if (isPrime(i))
            sum += i;
    }

    return sum;
}

int main() {
    int A, B;
    std::cin >> A >> B;

    std::cout << sum(A, B);

    return 0;
}