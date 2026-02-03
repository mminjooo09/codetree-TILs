#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0;

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];

        if (i==2 || i==4 || i==9)
            sum += arr[i];
    }

    std::cout << sum;
    
    return 0;
}