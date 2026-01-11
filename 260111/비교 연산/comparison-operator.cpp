#include <iostream>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    std::cout << (A>=B) << endl;
    std::cout << (A> B) << endl;
    std::cout << (A<=B) << endl;
    std::cout << (A< B) << endl;
    std::cout << (A==B) << endl;
    std::cout << (A!=B) << endl;

    return 0;
}