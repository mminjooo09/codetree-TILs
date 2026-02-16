#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    int input[n];
    string output;
    for (int i=0; i<n; i++) {
        std::cin >> input[n];
        output += to_string(input[n]);
    }

    int outlen = output.length();
    for (int i=0; i < outlen; i++) {
        std::cout << output[i];
        if ((i+1)%5==0)
            std::cout << endl;
    }

    return 0;
}