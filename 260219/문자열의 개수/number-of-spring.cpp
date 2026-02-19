#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[100];
    int n = 0;
    int cnt = 0;

    while (1) {
        string s;
        std::cin >> s;

        if (s == "0")
            break;
        
        cnt++;
        if (cnt%2 == 1) {
            arr[n] = s;
            n++;
        }
    }

    std::cout << cnt << endl;
    for (int i=0; i<n; i++)
        std::cout << arr[i] << endl;
    
    return 0;
}