#include <iostream>
using namespace std;

int main() {
    int arr[100];

    for (int i=0; i<100; i++) {
        std::cin >> arr[i];

        if (arr[i]==0)
            break;
        else if (arr[i]%2==0)
            std::cout << arr[i]/2 << " ";
        else
            std::cout << arr[i]+3 << " ";
    }
    
    return 0;
}