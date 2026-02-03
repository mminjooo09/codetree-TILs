#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0, cnt=0;

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];

        if (arr[i]==0) {
            cnt = i;
            break;
        }
        else {
            sum += arr[i];
            cnt++;
        }
    }

    std::cout << fixed;
    std::cout.precision(1);
    std::cout << sum << " " << (double)sum/cnt;

    return 0;
}