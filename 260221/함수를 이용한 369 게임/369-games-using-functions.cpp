#include <iostream>
using namespace std;

bool ThreeMultiple(int i) {
    return i%3==0;
}

bool ThreeInTen(int i) {
    return i/10==3 || i/10==6 || i/10==9;
}

bool ThreeInOne(int i) {
    return i%10==3 || i%10==6 || i%10==9;
}

bool ThreeSixNine(int i) {
    return ThreeInOne(i) || ThreeInTen(i) || ThreeMultiple(i);
}

int main() {
    int A, B;
    std::cin >> A >> B;

    int cnt = 0;
    for (int i=A; i<=B; i++) {
        if (ThreeSixNine(i))
            cnt++;
    }

    std::cout << cnt;

    return 0;
}