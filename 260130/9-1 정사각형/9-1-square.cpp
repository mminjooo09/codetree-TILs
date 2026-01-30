#include <iostream>
using namespace std;

int main() {
    int cnt = 9;
    int N;
    std::cin >> N;

    for (int i=N; i>0; i--) {
        for (int j=N; j>0; j--) {
            std::cout << cnt;
            if (cnt>1)
                cnt--;
            else
                cnt=9;
        }
        std::cout << endl;
    }
    
    return 0;
}