#include <iostream>
using namespace std;

int main() {
    int N;
    int array[N];

    std::cin >> N;
    
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }

    for (int i = 0; i < N; i++) {
        array[i] *= array[i]; 
        std::cout << array[i] << " ";
    }

    return 0;
}