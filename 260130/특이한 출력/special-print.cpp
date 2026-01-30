#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            std::cout << "(" << i << ", " << j << ")" << " ";
            if ((i+j)%4==0)
                std::cout << endl;
            else
                continue;
        }
    }
    
    return 0;
}