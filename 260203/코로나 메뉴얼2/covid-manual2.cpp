#include <iostream>
using namespace std;

int main() {
    char state[3];
    int age[3];
    int cnt[4]={};

    for (int i=0; i<3; i++) {
        int n;
        std::cin >> state[i] >> age[i];

        if (state[i]=='Y' && age[i]>=37)
            n=0;
        else if (state[i]=='N' && age[i]>=37)
            n=1;
        else if (state[i]=='Y') 
            n=2;
        else
            n=3;
        
        cnt[n]++;
    }

    for (int i=0; i<4; i++) {
        std::cout << cnt[i] << " ";
    }

    if (cnt[0]>=2)
        std::cout << "E";
        
    return 0;
}