#include <iostream>
using namespace std;

int main() {
    int N, M;
    std::cin >> N >> M;
    int arr[N];
    int cnt=0;
    
    for (int i=0; i<N; i++) {
        std::cin >> arr[i];

        if (arr[i]==M)
            cnt++;
    }

    std::cout << cnt;
    
    return 0;
}