#include <iostream>
using namespace std;

int main() {
    int cnt = 2;
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            std::cout << cnt << " ";
            if (cnt<8)
                cnt+=2;
            else
                cnt=2;
        }
        std::cout << endl;
    }

    return 0;
}