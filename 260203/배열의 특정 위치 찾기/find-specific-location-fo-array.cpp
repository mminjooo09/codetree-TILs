#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum2=0, sum3=0, cnt=0;
    
    for (int i=0; i<10; i++) {
        std::cin >> arr[i];

        if (i%2==1) {
            sum2 += arr[i];
        }
        
        if ((i+1)%3==0) {
            sum3 += arr[i];
            cnt++;
        }
    }
    std::cout << fixed;
    std::cout.precision(1);
    std::cout << sum2 << " " << (double)sum3/cnt;

    return 0;
}