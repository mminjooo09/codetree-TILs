#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int arr[N];

    for (int i=0; i<N; i++) {
        std::cin >> arr[i];
        arr[i] *= arr[i];
        std::cout << arr[i] << " ";
    }
    
    return 0;
}