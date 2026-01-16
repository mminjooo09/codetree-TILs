#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt = 0;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        if ((i%4!=0) || ((i%100==0) && (i%400!=0)))
            continue;
        else
            cnt++;
    }

    std::cout << cnt;
    
    return 0;
}