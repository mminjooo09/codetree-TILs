#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    std::cin >> A >> B;

    int cnt = 0;
    for (int i=0; i<A.length()-1; i++) {
        if (A.substr(i, 2) == B)
            cnt++;
    }

    std::cout << cnt;

    return 0;
}