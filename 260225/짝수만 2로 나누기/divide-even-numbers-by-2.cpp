#include <iostream>
using namespace std;

void Even(int *x, int y) {
    for (int i=0; i<y; i++) {
        if (x[i]%2==0)
            x[i] = x[i]/2;
    }
}

int main() {
    int N;
    int arr[50];

    std::cin >> N;
    for (int i=0; i<N; i++)
        std::cin >> arr[i];

    Even(arr, N);

    for (int i=0; i<N; i++)
        std::cout << arr[i] << " ";

    return 0;
}