#include <iostream>
using namespace std;

int main() {
    int rlt=0;
    int st, ed;
    std::cin >> st >> ed;

    for (int i=st; i<=ed; i++) {
        int cnt=0;

        for (int j=1; j<=i; j++) {
            if (i%j==0)
                cnt++;
        }

        if (cnt==3)
            rlt++;
    }

    std::cout << rlt;

    return 0;
}
