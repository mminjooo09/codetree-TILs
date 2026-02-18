#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int Q;
    std::cin >> S >> Q;

    int len = S.length();
    for (int i=0; i<Q; i++) {
        int type;
        std::cin >> type;

        if (type == 1)
            S = S.substr(1, len-1) + S.substr(0, 1);
        else if (type == 2)
            S = S.substr(len-1, 1) + S.substr(0, len-1);
        else {
            string temp;
            for (int i=len-1; i>=0; i--) {
                temp += S[i];
            }
            S = temp;
        }

        std::cout << S << endl;;
    }

    return 0;
}
