#include <iostream>
using namespace std;

int main() {
    int N, Q;
    std::cin >> N >> Q;
    
    // 배열 입력
    int arr[N];
    for (int i=0; i<N; i++)
        std::cin >> arr[i];

    // 질의
    for (int i=0; i<Q; i++) {
        int type, a, b, s, e;
        std::cin >> type;

        if (type==1) {
            std::cin >> a;
            std::cout << arr[a-1] << endl;
        }
        else if (type==2) {
            int cnt=0;
            std::cin >> b;
            for (int i=0; i<N; i++) {
                if (cnt>=1) {
                    break;
                }
                else if (arr[i]==b) {
                    std::cout << i+1 << endl;
                    cnt++;
                    break;
                }
            }
            if (cnt==0)
                std::cout << 0 << endl;
        }
        else if (type==3) {
            std::cin >> s >> e;
            for (int i=s-1; i<=e-1; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << endl;
        }
    }

    return 0;
}