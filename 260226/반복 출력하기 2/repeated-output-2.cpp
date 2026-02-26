#include <iostream>
using namespace std;

void PrintHelloWorld(int n) {
    if (n==0)
        return;
    
    PrintHelloWorld(n-1);
    std::cout << "HelloWorld" << endl;
}

int main() {
    int N;
    std::cin >> N;

    PrintHelloWorld(N);

    return 0;
}