#include <iostream>
using namespace std;

int main() {
    int N;
    std::cin >> N;

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (j%2==0) {
                if (i==0)
                    std::cout << "* ";
                else
                    std::cout << "  ";
            }
            else {
                if (i <= j)
                    std::cout << "* ";
                else
                    std::cout << "  ";
            }
        }
        std::cout << endl;
    }  
      
    return 0;
}