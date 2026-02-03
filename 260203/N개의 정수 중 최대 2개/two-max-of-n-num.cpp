#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int arr[N];
    int idx;

    int max1=INT_MIN;
    for (int i=0; i<N; i++) {
        std::cin >> arr[i];

        if (arr[i] >= max1) {
            max1 = arr[i];
            idx=i;
        }
    }

    int max2=INT_MIN;
    for (int i=0; i<N; i++) {
        arr[idx] = {0};

        if (arr[i] >= max2) {
            max2 = arr[i];
            idx=i;
        }
    }

    std::cout << max1 << " " << max2;


    return 0;
}
