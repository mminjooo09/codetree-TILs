#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt[7]={};

    for (int i=0; i<10; i++) {
        std::cin >> arr[i];
        cnt[arr[i]]++;
    }

    for (int i=1; i<=6; i++) {
        std::cout << i << " - " << cnt[i] << endl;
    }

    return 0;
}