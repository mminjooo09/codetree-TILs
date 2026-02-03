#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0, cnt=0;

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];

        if (arr[i]==0) {
            break;
        }
        else {
            if (arr[i]%2==0) {
                sum += arr[i];
                cnt++;
            }
        }
    }

    std::cout << cnt << " " << sum;

    return 0;
}