#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    std::cin >> A >> B;

    string AB = A + B;
    string BA = B + A;

    std::cout << stoi(AB) + stoi(BA);
    
    return 0;
}