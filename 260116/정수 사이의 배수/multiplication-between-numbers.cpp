#include <iostream>
using namespace std;

int main() {
    int A, B;
    int sum=0, cnt=0;
    double avg=0;
    std::cin >> A >> B;

    for (int i=A; i<=B; i++) {
        if ((i%5==0) || (i%7==0)) {
            sum += i;
            cnt++;
        }
    }

    avg = (double)sum / cnt;

    std::cout << fixed;
    std::cout.precision(1);
    std::cout << sum << " " << avg;

    return 0;
}