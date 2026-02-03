#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int even=0, odd=0;

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];

        if (i%2==0)
            odd += arr[i];
        else
            even += arr[i];
    }

    if (odd > even)
        std::cout << odd-even;
    else
        std::cout << even-odd;

    return 0;
}