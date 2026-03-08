#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if (b==0)
        return a;

    return GCD(b, a%b);
}

int LCM(int a, int b) {
    return (a*b) / GCD(a, b);
}

int LCM_ARR(int arr[], int n) {
    if (n==1)
        return arr[0];
    
    return LCM(arr[n-1], LCM_ARR(arr, n-1));
}

int main() {
    int n;
    std::cin >> n;

    int arr[n];
    for (int i=0; i<n; i++)
        std::cin >> arr[i];
    
    std::cout << LCM_ARR(arr, n);

    return 0;
}