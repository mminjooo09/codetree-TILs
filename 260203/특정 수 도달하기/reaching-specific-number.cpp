#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    double cnt=0;
    std::cout << fixed;
    std::cout.precision(1);

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];

        if (arr[i]>=250)
            break;
        
        sum += arr[i];
        cnt++;

    }

    std::cout << sum << " " << sum/cnt;
}