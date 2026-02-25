#include <iostream>
using namespace std;

int n, m;
int A[100];

int Operation() {
    int sum = A[0];

    while(m!=1) {
        sum += A[m-1];
        if (m%2==0)
            m /= 2;
        else
            m -= 1;
    }

    return sum;
}

int main() {
    std::cin >> n >> m;

    for (int i=0; i<n; i++)
        std::cin >> A[i];

    std::cout << Operation();

    return 0;
}