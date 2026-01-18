#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=N; i>0; i--) {
        for (int j=i; j>0; j--) {
            std::cout << "* ";
        }
        std::cout << endl;
    }
    
    return 0;
}