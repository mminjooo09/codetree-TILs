#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt = 0;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        if (i%2==0)
            continue;
        else if (i%3==0)
            continue;
        else if (i%5==0)
            continue;
        else
            cnt++;
    }

    std::cout << cnt;

    return 0;
}