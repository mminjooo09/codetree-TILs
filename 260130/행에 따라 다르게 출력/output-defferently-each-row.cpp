#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            if (i%2==1) {
                cnt++;
                std::cout << cnt << " ";
            }
            else {
                cnt+=2;
                std::cout << cnt << " ";
            }
        }
        std::cout << endl;
    }

    return 0;
}