#include <iostream>
using namespace std;

void PrintStar(int n) {
    if (n==0)
        return;
    
    PrintStar(n-1);
    for (int i=0; i<n; i++)
        std::cout << "*";
    std::cout << endl;
}

int main() {
    int N;
    std::cin >> N;

    PrintStar(N);

    return 0;
}