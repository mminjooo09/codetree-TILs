#include <iostream>
using namespace std;

int main() {
    int A, B;
    bool satisfied = false;
    std::cin >> A >> B;

    for (int i=A; i<=B; i++) {
        if (1920%i==0 && 2880%i==0)
            satisfied = true;
    }

    std::cout << satisfied;
    
    return 0;
}