#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int sum = a+b+c;
    int ave = sum/3;
    int rlt = sum - ave;

    std::cout << sum << endl << ave << endl << rlt;

    return 0;
}