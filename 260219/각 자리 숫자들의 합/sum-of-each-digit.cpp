#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    string N = to_string(n);
    int sum = 0;
    for (int i=0; i<N.length(); i++)
        sum += N[i] - '0';

    std::cout << sum;

    return 0;
}