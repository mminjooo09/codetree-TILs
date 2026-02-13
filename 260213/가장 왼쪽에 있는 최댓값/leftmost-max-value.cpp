#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N];
    for (int i=0; i<N; i++)
        std::cin >> arr[i];

    int max = -1;
    int max_idx = -1;
    for (int i=0; i<N; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_idx = i;
        }
    }

    std::cout << max_idx+1 << " ";

    while (max_idx != 0) {
        int idx = -1;
        max = -1;
        for (int i=0; i<max_idx; i++) {
            if (arr[i] > max) {
                max = arr[i];
                idx = i;
            }
        }
        max_idx = idx;
        std::cout << idx+1 << " ";    
    }

    return 0;
}
