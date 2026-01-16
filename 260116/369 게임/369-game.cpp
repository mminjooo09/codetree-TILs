#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;
    std::cin >> N;

    while (i <= N) {
        if ((i%10==3) || (i%10==6) || (i%10==9) || (i%3==0))
            std::cout << 0 << " ";
        else
            std::cout << i << " ";
        
        i++;
    }

    return 0;
}