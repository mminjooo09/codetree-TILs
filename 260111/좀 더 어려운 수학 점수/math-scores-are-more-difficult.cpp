#include <iostream>
using namespace std;

int main() {
    int a_math, a_eng, b_math, b_eng;
    std::cin >> a_math >> a_eng >> b_math >> b_eng;

    if (a_math == b_math)
        std::cout << ((a_eng > b_eng) ? 'A' : 'B');
    else
        std::cout << ((a_math > b_math) ? 'A' : 'B');

    return 0;
}