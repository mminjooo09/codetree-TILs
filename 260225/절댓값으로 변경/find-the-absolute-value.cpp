#include <iostream>
using namespace std;

void Absol(int *arr, int n) {
    for (int i=0; i<n; i++) {
        if (arr[i]<0)
            arr[i] = -arr[i];
    }
}

int main() {
    int N;
    int arr[50];

    std::cin >> N;

    for (int i=0; i<N; i++)
        std::cin >> arr[i];
    
    Absol(arr, N);

    for (int i=0; i<N; i++)
        std::cout << arr[i] << " ";    

    return 0;
}