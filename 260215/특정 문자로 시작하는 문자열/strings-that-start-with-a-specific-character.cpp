#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    string arr[N];
    for (int i=0; i<N; i++)
        std::cin >> arr[i];
    
    char c;
    std::cin >> c;

    int cnt = 0;
    double len = 0;
    std::cout << fixed;
    std::cout.precision(2);

    for (int i=0; i<N; i++) {
        if (arr[i][0] == c) {
            cnt++;
            len += arr[i].length();
        }
    }

    std::cout << cnt << " " << len/cnt;

    return 0;
}