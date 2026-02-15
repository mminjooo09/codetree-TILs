#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    int len = 0;
    int cnt = 0;
    string arr[N];
    for (int i=0; i<N; i++) {
        std::cin >> arr[i];
        
        len += arr[i].length();
        
        if (arr[i][0] == 'a')
            cnt++;
    }

    std::cout << len << " " << cnt;

    return 0;
}