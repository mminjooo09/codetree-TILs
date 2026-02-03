#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    
    int cnt=0;
    int arr[N];
    for (int i=0; i<N; i++) {
        std::cin >> arr[i];

        if (arr[i]==2)
            cnt++;
        
        if (cnt==3) {
            std::cout << i+1;
            break;
        }
    }

    return 0;
}