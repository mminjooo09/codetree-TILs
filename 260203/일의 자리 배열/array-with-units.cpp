#include <iostream>
using namespace std;

int main() {
    int arr[10];
    std::cin >> arr[0] >> arr[1];
    std::cout << arr[0] << " " << arr[1] << " ";
    
    for (int i=2; i<10; i++) {
        arr[i] = arr[i-1] + arr[i-2];

        if (arr[i]>=10) {
            arr[i]%=10;
        }

        std::cout << arr[i] << " ";
    }

    return 0;
}