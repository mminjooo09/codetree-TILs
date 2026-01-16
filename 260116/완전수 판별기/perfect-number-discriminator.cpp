#include <iostream>
using namespace std;

int main() {
    int N;
    int sum=0;
    std::cin >> N;

    for (int i=1; i<N; i++) {
        if (N%i==0) {
            sum += i;
        }
    }

    if (sum==N)
        std::cout << "P";
    else
        std::cout << "N";

    return 0;
}