#include <iostream>
using namespace std;

int main() {
    int N, M;
    int sum=0, cnt=0;
    double avg=0;

    std::cin >> N;

    for (int i=0; i<N; i++) {
        std::cin >> M;
        sum += M;
        cnt++;
    }

    avg = (double)sum / cnt;

    std::cout << fixed;
    std::cout.precision(1);
    std::cout << sum << " " << avg;
    
    return 0;
}