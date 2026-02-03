#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    int arr[N];
    int min = INT_MAX;
    int cnt = 0;

    for (int i=0; i<N; i++) {
        std::cin >> arr[i];

        if (arr[i] == min)
            cnt++;
        else if (arr[i] < min) {
            cnt=0;
            min = arr[i];
            cnt++;
        }
    }
    
    std::cout << min << " " << cnt;

    return 0;
}
