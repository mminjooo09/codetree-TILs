#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=N; i>0; i--) {
        for (int j=N; j>0; j--) {
            std::cout << j << " ";
        }
        std::cout << endl;
    }
    
    return 0;
}