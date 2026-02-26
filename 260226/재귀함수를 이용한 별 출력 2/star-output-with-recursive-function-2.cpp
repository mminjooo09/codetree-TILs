#include <iostream>
using namespace std;

void PrintStar(int n) {
    if (n==0)
        return;
    
    for (int i=0; i<n; i++)
        std::cout << "*" << " ";
    std::cout << endl;

    PrintStar(n-1);

    for (int i=0; i<n; i++)
        std::cout << "*" << " ";
    std::cout << endl;
}

int main() {
    int n;
    std::cin >> n;

    PrintStar(n);

    return 0;
}