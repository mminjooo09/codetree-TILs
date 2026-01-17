#include <iostream>
using namespace std;

int main() {
    int age;
    int sum=0, cnt=0;
    double rlt=0;

    for (;;) {
        std::cin >> age;
        
        if (age<30) {
            sum += age;
            cnt++;
        }
        else {
            rlt = (double)sum / cnt;
            
            std::cout << fixed;
            std::cout.precision(2);
            std::cout << rlt << endl;

            break;
        }
    }

    return 0;
}