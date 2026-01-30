#include <iostream>
using namespace std;

int main() {
    int cnt=0;
    int st, ed;
    std::cin >> st >> ed;

    for (int i=st; i<=ed; i++) {
        int sum=0;

        for (int j=1; j<i; j++) {
            if (i%j==0)
                sum += j;
        }
        
        if (sum==i)
            cnt++;
    }
    
    std::cout << cnt;

    return 0;
}
