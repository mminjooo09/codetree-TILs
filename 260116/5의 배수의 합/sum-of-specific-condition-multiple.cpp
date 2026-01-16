#include <iostream>
using namespace std;

int main() {
    int A, B;
    int sum = 0;
    std::cin >> A >> B;

    if (A<=B) {
        for (int i=A; i<=B; i++) {
            if (i%5==0)
                sum += i;
        }
    }
    else {
        for (int i=B; i<=A; i++) {
            if (i%5==0)
                sum += i;
        }
    }

    std::cout << sum;
    
    return 0;
}