#include <iostream>
using namespace std;

int main() {
    char cnt = 'A';
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<i; j++)
            std::cout << "  ";
        
        for (int j=1; j<=N-i+1; j++) {
            std::cout << cnt << " ";
            if (cnt == 'Z')
                cnt = 'A';
            else
                cnt++;
        }
        std::cout << endl;
    }

    return 0;
}