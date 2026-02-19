#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    std::cin >> A >> B;

    string C = to_string(A+B);

    int cnt = 0;
    for (int i=0; i<C.length(); i++) {
        if (C[i] == '1')
            cnt++;
    }

    std::cout << cnt;

    return 0;
}