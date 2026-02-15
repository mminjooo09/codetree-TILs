#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];

    for (int i=0; i<10; i++)
        std::cin >> arr[i];
    
    for (int i=9; i>=0; i--)
        std::cout << arr[i] << endl;
        
    return 0;
}