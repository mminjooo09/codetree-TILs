#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        if ((i%2==0) || (i%3==0))
            std::cout << 1 << " ";
        else
            std::cout << 0 << " ";
    }
    
    return 0;
}