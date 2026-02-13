#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N];
    for (int i=0; i<N; i++)
        std::cin >> arr[i];

    int cnt[1001] = {0};
    for (int i=0; i<N; i++) {
        cnt[arr[i]]++;
    }

    int max = -1;
    for (int i=0; i<1001; i++) {
        if (cnt[i]==1 && i>max)
            max = i;
    }

    std::cout << max;

    return 0;
}