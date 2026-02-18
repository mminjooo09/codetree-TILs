#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    std::cin >> S;

    int S_len = S.length();
    int s = S.length();
    for (int i=0; i<S_len; i++) {
        int n;
        std::cin >> n;

        if (s>0 && n<s) {     // 5>0, 3<5   // 4>0 2<4  // 3>0 0<4  // 
            S = S.erase(n, 1); // helo      // heo      // eo
            s = S.length();    // 4         // 3        // 2
            std::cout << S << endl;
        }
        else if (n>=s) {
            S = S.erase(s-1, 1);
            s = S.length();
            std::cout << S << endl;
        }
        else if (s == 1)
            break;
    }

    return 0;
}
