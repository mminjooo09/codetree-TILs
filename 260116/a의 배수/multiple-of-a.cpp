#include <iostream>
using namespace std;

int main() {
    int N, a;
    int i = 1;
    std::cin >> N >> a;

    while (i <= N) {
        if (i%a==0)
            std::cout << 1 << endl;
        else
            std::cout << 0 << endl;
        
        i++;
    }

    return 0;
}