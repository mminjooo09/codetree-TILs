#include <iostream>
using namespace std;

int main() {
    int cnt=0;
    int N;
    std::cin >> N;

    for (int i=0; i<N; i++) {
        double sum=0;
        int arr[4];

        for (int i=0; i<4; i++) {
            std::cin >> arr[i];
            sum += arr[i];
        }

        if ((sum/4) >= 60) {
            std::cout << "pass" << endl;
            cnt++;
        }
        else
            std::cout << "fail" << endl;
    }

    std::cout << cnt;

    return 0;
}