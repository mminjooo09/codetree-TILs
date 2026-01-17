#include <iostream>
using namespace std;

int main() {
    int N;
    int M = 0;
    std::cin >> N;

    for (int i=1; i<=100; i++) {
        if (M<N)
           M += i;
        else {
            std::cout << i-1;
            break;
        }
        
    }

    return 0;
}