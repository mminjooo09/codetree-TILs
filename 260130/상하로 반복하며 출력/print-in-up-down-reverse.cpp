#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            if (j%2==1)
                std::cout << i;
            else
                std::cout << N-i+1;
        }
        std::cout << endl;
    }
    
    return 0;
}