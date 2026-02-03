#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt=0;

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];

        if (arr[i] == 0) {
            cnt = i;
            break;
        }
        else
            cnt++;
    }

    for (int i=cnt-1; i>=0; i--) {
        std::cout << arr[i] << " ";
    }

    return 0;
}