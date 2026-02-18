#include <iostream>
#include <string>
using namespace std;

int main() {
   
    for (int i=0; i<5; i++) {
        int a;
        std::cin >> a;

        std::cout << (char)a << " ";
    }
    return 0;
}