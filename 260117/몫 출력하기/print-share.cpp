#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt=0;

    for (;;) {
        std::cin >> N;

        if (cnt==3)
            break;

        if (N%2==0) {
            std::cout << N/2 << endl;
            cnt++;
        }
        else
            continue;
    }
    
    return 0;
}