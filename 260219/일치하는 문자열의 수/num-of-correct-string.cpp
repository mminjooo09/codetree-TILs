#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string A;
    std::cin >> n >> A;

    int cnt = 0;
    for (int i=0; i<n; i++) {
        string B;
        std::cin >> B;

        if (A == B)
            cnt++;
    }

    std::cout << cnt;

    return 0;
}