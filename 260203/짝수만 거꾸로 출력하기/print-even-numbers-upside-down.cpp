#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int arr[N];

    for (int i=0; i<N; i++) {
        std::cin >> arr[i];
    }

    for (int i=N-1; i>=0; i--) {
        if (arr[i]%2==0)
            std::cout << arr[i] << " ";
    }
    
    return 0;
}