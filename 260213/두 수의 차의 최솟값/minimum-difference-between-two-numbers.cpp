#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int arr[N];
    for (int i=0; i<N; i++)
        std::cin >> arr[i];
    
    int min = INT_MAX;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (arr[i]-arr[j]<min && arr[i]-arr[j]>0)
                min = arr[i] - arr[j];
        }
    }

    std::cout << min;

    return 0;
}