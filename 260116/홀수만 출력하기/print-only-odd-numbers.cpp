#include <iostream>
using namespace std;

int main() {
    int N, M;
    int i = 1;
    std::cin >> N;

    while (i <= N) {
        std::cin >> M;

        if ((M%2==1) && (M%3==0))
            std::cout << M << endl;
        
        i++;
    }

    return 0;
}