#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt[1001] = {0};
    for (int i=0; i<10; i++) {
        std::cin >> arr[i];
        cnt[arr[i]]++;
    }

    int max = 0;
    int min = 1001;
    for (int i=0; i<500; i++) {
        if (cnt[i]!=0 && i>max) {
            max = i;
        }
    }
    for (int i=501; i<1001; i++) {
        if (cnt[i]!=0 && i<min) {
            min = i;
        }
    }

    std::cout << max << " " << min;
    
    return 0;
}