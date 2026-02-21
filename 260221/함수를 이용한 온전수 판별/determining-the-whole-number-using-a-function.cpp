#include <iostream>
using namespace std;

bool IsMagicNum(int N) {
    if (N%2==0 || N%10==5 || (N%3==0 && N%9!=0))
        return false;
    else
        return true;
}

int MagicNumCnt(int A, int B) {
    int cnt = 0;
    for (int i=A; i<=B; i++) {
        if (IsMagicNum(i))
            cnt++;
    }
    
    return cnt;
}

int main() {
    int A, B;
    std::cin >> A >> B;

    std::cout << MagicNumCnt(A, B);

    return 0;
}