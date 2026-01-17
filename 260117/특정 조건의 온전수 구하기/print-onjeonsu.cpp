#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        if (i%2==0)
            continue;
        else if (i%10==5)
            continue;
        else if (i%3==0 && i%9!=0)
            continue;
        else
            std::cout << i << " ";
    }
    
    return 0;
}