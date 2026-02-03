#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N];
    for (int i=0; i<N; i++)
        std::cin >> arr[i];
    
    int max1, max2;
    if (arr[0]>arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    }
    else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (int i=2; i<N; i++) {
        if (arr[i] >= max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    std::cout << max1 << " " << max2;

    return 0;
}
