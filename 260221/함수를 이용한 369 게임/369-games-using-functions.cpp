#include <iostream>
using namespace std;

bool ThreeMultiple(int i) {
    return i%3==0;
}

bool ThreeSixNine(int i) {
    while (i>0) {
        if (i%10==3 || i%10==6 || i%10==9)
            return true;
        i /= 10;
    }
    
    return false;
}

bool Has369(int i) {
    return ThreeSixNine(i) || ThreeMultiple(i);
}

int main() {
    int A, B;
    std::cin >> A >> B;

    int cnt = 0;
    for (int i=A; i<=B; i++) {
        if (Has369(i))
            cnt++;
    }

    std::cout << cnt;

    return 0;
}