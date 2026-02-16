#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    string arr[n];
    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
        std::cout << arr[i];
    }
    
    return 0;
}