#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        if (i%2==0) {
            for (int j=0; j<i; j++) {
                std::cout << "* ";
            }
        }
        else
            std::cout << "* ";
        std::cout << endl;
    }
    
    return 0;
}