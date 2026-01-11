#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    std::cout << ((B>A) && (B<C));
    return 0;
}