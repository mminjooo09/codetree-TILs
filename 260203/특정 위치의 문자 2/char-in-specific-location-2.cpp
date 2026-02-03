#include <iostream>
using namespace std;

int main() {
    char arr[10];

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];

        if (i==1 || i==4 || i==7) {
            std::cout << arr[i] << " ";
        }
    }
    
    return 0;
}