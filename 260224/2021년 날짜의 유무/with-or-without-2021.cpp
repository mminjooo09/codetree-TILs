#include <iostream>
using namespace std;

bool Day24 (int d) {
    if (1<=d && d<=28)
        return true;
    
    return false;
}

bool Day30 (int d) {
    if (1<=d && d<=30)
        return true;
    
    return false;
}

bool Day31 (int d) {
    if (1<=d && d<=31)
        return true;
    
    return false;
}

bool ExistDay(int m, int d) {
    if (m==2)
        return Day24(d);
    else if (1<=m && m<8) {
        if (m%2==0)
            return Day30(d);
        else
            return Day31(d);
    }
    else if (8<=m && m<13) {
        if (m%2==0)
            return Day31(d);
        else
            return Day30(d);
    }

    return false;
}

int main() {
    int M, D;
    std::cin >> M >> D;

    if (ExistDay(M, D))
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}