#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    std::cin >> A >> B;
    
    int len = A.length() - B.length() + 1;
    for (int i=0; i<len; i++) {
        int idx;
        if (A.find(B) != string::npos) {
            idx = A.find(B);
            A = A.erase(idx, B.length());
        }
        else
            break;
    }

    std::cout << A;

    return 0;
}
