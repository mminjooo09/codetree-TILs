#include <iostream>
using namespace std;

bool IsPrime(int N) {
    for (int i=2; i<N; i++) {
        if (N%i==0)
            return false;
    }

    return true;
}

bool IsEven(int N) {
    if ((N/10+N%10)%2==0)
        return true;
    
    return false;
}

void MagicNumCnt(int A, int B) {
    int cnt = 0;
    for (int i=A; i<=B; i++) {
        if (IsPrime(i) && IsEven(i))
            cnt++;
    }

    std::cout << cnt;
}

int main() {
    int A, B;
    std::cin >> A >> B;

    MagicNumCnt(A, B);

    return 0;
}