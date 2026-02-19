#include <iostream>
using namespace std;

void PrintStar() {
    for (int i=0; i<10; i++)
        std::cout << "*";
    std::cout << endl;
}

int main() {
    for (int i=0; i<5; i++)
        PrintStar();
        
    return 0;
}