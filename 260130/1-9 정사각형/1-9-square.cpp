#include <iostream>
using namespace std;

int main() {
    int cnt=1;
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            std::cout << cnt;
            if (cnt<9)
                cnt++;
            else
                cnt=1;
        }
        std::cout << endl;
    }

    return 0;
}