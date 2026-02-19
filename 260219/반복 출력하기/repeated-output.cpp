#include <iostream>
using namespace std;

void PrintN (int n) {
    for (int i=0; i<n; i++)
        std::cout << "12345^&*()_" << endl;
}

int main() {
    int N;
    std::cin >> N;

    PrintN(N);

    return 0;
}