#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        int cnt=0;

        for (int j=1; j<=i; j++) {
            if (i%j==0)
                cnt++;
        }
        if (cnt==2)
            std::cout << i << " ";
    }
    
    return 0;
}