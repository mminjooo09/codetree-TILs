#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[4];
    
    for (int i=0; i<4; i++) {
        std::cin >> arr[i];
    }

    for (int i=3; i>=0; i--) {
        std::cout << arr[i] << endl;
    }
    
    return 0;
}