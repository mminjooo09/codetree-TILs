#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int arr[100];
    arr[0] = N;
    int cnt = 0;
    int rlt = 0;

    for (int i=1; i<100; i++) {
        rlt = N * i;
        std::cout << rlt << " ";

        if (rlt%5==0)
            cnt++;
        
        if (cnt==2)
            break;
    }
    
    return 0;
}