#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            if (i==1 || i==N || j==1 || j==N)
                std::cout << "* ";
            else if (j<i)
                std::cout << "* ";
            else
                std::cout << "  ";
        }

        std::cout << endl;
    }
    return 0;
}