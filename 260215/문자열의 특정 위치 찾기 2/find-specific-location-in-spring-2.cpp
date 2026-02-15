#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    std::cin >> c;

    int cnt = 0;
    for (int i=0; i<5; i++) {
        bool yes = false;
        
        for (int j=2; j<=3; j++) {
            if (arr[i][j] == c) {
                yes = true;
                cnt++;
            }
        }

        if (yes == true) {
            std::cout << arr[i] << endl;
        }
    }
    
    std::cout << cnt;

    return 0;
}