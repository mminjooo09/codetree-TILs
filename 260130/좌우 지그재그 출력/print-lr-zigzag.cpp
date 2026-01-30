#include <iostream>
using namespace std;

int main() {
    int cnt = 1;
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            if (i%2==1)
                std::cout << cnt << " ";
            else
                std::cout << (N*i)-j+1 << " ";
            cnt++;
        }
        std::cout << endl;
    }

    return 0;
}