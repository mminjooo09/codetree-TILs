#include <iostream>
using namespace std;

int main() {
    int A, N;
    std::cin >> A >> N;
    
    for (int i=0; i<N; i++) {
        A += N;
        std::cout << A << endl;
    }

    return 0;
}