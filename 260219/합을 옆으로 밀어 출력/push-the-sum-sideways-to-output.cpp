#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int sum = 0;
    for (int i=0; i<N; i++) {
        int a;
        std::cin >> a;

        sum += a;
    }

    string n = to_string(sum);
    int len = n.length();
    
    n = n.substr(1, len-1) + n.substr(0, 1);
    std::cout << n;

    return 0;
}