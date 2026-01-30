#include <iostream>
using namespace std;

int main() {
    int N, a, b;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        int sum=0;
        std::cin >> a >> b;

        for (int j=a; j<=b; j++) {
            if (j%2==0)
                sum += j;
        }

        std::cout << sum << endl;
    }
    
    return 0;
}