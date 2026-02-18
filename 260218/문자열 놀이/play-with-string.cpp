#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int Q;
    std::cin >> S >> Q;

    int type, a, b;
    char x, y;
    for (int i=0; i<Q; i++) {
        std::cin >> type;
        char temp1, temp2;
        if (type == 1) {
            std::cin >> a >> b;
            temp1 = S[a-1];
            temp2 = S[b-1];
            S[b-1] = temp1;
            S[a-1] = temp2;
            std::cout << S << endl;
        }

        else if (type == 2) {
            std::cin >> x >> y;
            for (int i=0; i<S.length(); i++) {
                if (S[i] == x)
                    S[i] = y;
            }
            std::cout << S << endl;
        }
    }

    return 0;
}