#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt[10]={};

    for (int i=0; i<100; i++) {
        std::cin >> arr[i];

        if (arr[i]==0)
            break;
        
        if (arr[i]<10)
            continue;
        else
            cnt[arr[i]/10]++;
    }

    for (int i=1; i<=9; i++)
        std::cout << i << " - " << cnt[i] << endl;
    
    return 0;
}