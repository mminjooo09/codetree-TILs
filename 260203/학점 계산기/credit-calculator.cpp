#include <iostream>
using namespace std;

int main() {
    int N;
    double sum = 0;
    double arr[5];
    std::cin >> N;

    for (int i=0; i<N; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << fixed;
    std::cout.precision(1);
    std::cout << sum/N << endl;

    if ((sum/N)>=4.0)
        std::cout << "Perfect";
    else if ((sum/N)>=3.0)
        std::cout << "Good";
    else
        std::cout << "Poor";
    
    return 0;
}