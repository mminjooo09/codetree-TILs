#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[10];
    int min = INT_MIN;

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];
        
        if (arr[i] >= min)
            min = arr[i];
    }

    std::cout << min;
    
    return 0;
}