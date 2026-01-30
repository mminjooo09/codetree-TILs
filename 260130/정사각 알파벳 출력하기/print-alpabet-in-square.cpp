#include <iostream>
using namespace std;

int main() {
    int cnt = 65;
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            std::cout << (char)cnt;
            cnt++;
        }
        std::cout << endl;
    }
    
    return 0;
}