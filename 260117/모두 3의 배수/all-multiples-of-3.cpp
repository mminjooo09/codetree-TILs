#include <iostream>
using namespace std;

int main() {
    int N;
    bool satisfied = true;
    
    for (int i=0; i<5; i++) {
        std::cin >> N;
        
        if (N%3!=0)
            satisfied = false;
    }

    std::cout << satisfied;
    
    return 0;
}