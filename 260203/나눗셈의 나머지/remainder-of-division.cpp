#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;
    int cnt[10] = {};
    int ans = 0;

    while (A>1) {
        cnt[A%B]++;
        A /= B;
    }

    for (int i=0; i<10; i++) {
        ans += cnt[i] * cnt[i];
    }

    std::cout << ans;

    return 0;
}