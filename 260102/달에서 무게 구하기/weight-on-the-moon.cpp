#include <iostream>
using namespace std;

int main() {
    int a = 13; // 추의 무게
    double b = 0.165; //달의 무게

    cout << fixed;

    cout.precision(6);

    cout << a << " * " << b << " = " << a*b;

    return 0;
}