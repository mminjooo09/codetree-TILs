#include <iostream>
using namespace std;

int main() {
    int cnt=1;
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=i; j++) {
            std::cout << cnt << " ";
            cnt++;
        }
        std::cout << endl;
    }
    
    return 0;
}