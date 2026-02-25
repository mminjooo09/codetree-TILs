#include <iostream>
using namespace std;

int n, m;
int arr[100];

int ArrSum(int n, int m) {
    int sum = 0;
    for (int i=n-1; i<m; i++)
        sum += arr[i];

    return sum;
}

int main() {
    std::cin >> n >> m;

    for (int i=0; i<n; i++)
        std::cin >> arr[i];
    
    for (int i=0; i<m; i++) {
        int a1, a2;
        std::cin >> a1 >> a2;

        std::cout << ArrSum(a1, a2) << endl;       
    }

    return 0;
}