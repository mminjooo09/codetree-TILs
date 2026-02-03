#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char N;
    std::cin >> N;
    int idx = -1;

    for (int i=0; i<6; i++) {
        if (arr[i] == N)
            idx = i;
    }

    if (idx == -1)
        std::cout << "None";
    else
        std::cout << idx;

    return 0;
}