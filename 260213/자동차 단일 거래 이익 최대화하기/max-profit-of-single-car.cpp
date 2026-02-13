#include <iostream>

using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N];
    for (int i=0; i<N; i++)
        std::cin >> arr[i];
    
    int max = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (i>j && arr[i]-arr[j]>max) {
                max = arr[i]-arr[j];
            }
        }
    }

    std::cout << max;

    return 0;
}
