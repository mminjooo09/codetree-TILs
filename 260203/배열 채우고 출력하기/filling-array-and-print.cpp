#include <iostream>
using namespace std;

int main() {
    char arr[10];

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];
    }
    
    for (int i=9; i>=0; i--) {
        std::cout << arr[i];
    }

    return 0;
}