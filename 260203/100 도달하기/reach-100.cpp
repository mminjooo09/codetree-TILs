#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[100];
    arr[0] = 1;
    arr[1] = N;

    std::cout << arr[0] << " " << arr[1] << " ";

    for (int i=2; i<100; i++) {
        arr[i] = arr[i-1] + arr[i-2];

        std::cout << arr[i] << " ";

        if (arr[i]>100)
            break;
    }
    
    return 0;
}