#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int arr[N];
    int even[N];
    int cnt=0;

    for (int i=0; i<N; i++) {
        std::cin >> arr[i];

        if (arr[i]%2==0) {
            even[cnt] = arr[i];
            cnt++;
        }
    }

    for (int i=0; i<cnt; i++) {
        std::cout << even[i] << " ";
    }

    return 0;
}