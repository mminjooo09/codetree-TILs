#include <iostream>
#include <climits>
using namespace std;

int main() {
    int max = INT_MIN;
    int min = INT_MAX;
    int arr[100];

    for (int i=0; i<100; i++) {
        std::cin >> arr[i];

        if (arr[i]==999 || arr[i]==-999)
            break;
            
        if (arr[i]>max)
            max = arr[i];
        
        if (arr[i]<min)
            min = arr[i];
    }

    std::cout << max << " " << min;

    return 0;
}