#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N];
    for (int i=0; i<N; i++)
        std::cin >> arr[i];

    int max = arr[0];
    int cnt = 0;
    for (int i=1; i<N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i] = max)
            cnt++;
    }

    if (cnt==1)
        std::cout << max;
    else
        std::cout << -1;
    
    return 0;
}
