#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N];
    int cnt[10] = {};

    for (int i=0; i<N; i++) {
        std::cin >> arr[i];
        cnt[arr[i]]++;
    }

    for (int i=1; i<=9; i++) {
        std::cout << cnt[i] << endl;
    }

    return 0;
}