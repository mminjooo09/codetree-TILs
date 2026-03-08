#include <iostream>
using namespace std;

int Max(int arr[], int n) {
    if (n==0)
        return arr[0];

    int max = Max(arr, n-1);

    if (arr[n-1]>max)
        return arr[n-1];
    else
        return max;
}

int main() {
    int n;
    std::cin >> n;

    int arr[n];
    for (int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::cout << Max(arr, n-1);    

    return 0;
}