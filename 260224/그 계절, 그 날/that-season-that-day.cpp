#include <iostream>
#include <string>
using namespace std;

int Y, M, D;

bool IsLeapDay() {
    if ((Y%4==0 && Y%100!=0) || Y%400==0)
        return true;
    
    return false;
}

int LastMonth() {
    if (M==2) {
        if (IsLeapDay())
            return 29;
        return 28;
    }
    else if (M==2 || M==4 || M==6 || M==9 || M==11)
        return 30;
    
    return 31;
}

bool ExistDay() {
    if (M<=12 && D<=LastMonth())
        return true;
    
    return false;
}

void WhatWeather() {
    if (ExistDay()) {
        if (3<=M && M<=5)
            std::cout << "Spring";
        else if (6<=M && M<=8)
            std::cout << "Summer";
        else if (9<=M && M<=11)
            std::cout << "Fall";
        else
            std::cout << "Winter";
    }
    else
        std::cout << -1;
}

int main() {
    std::cin >> Y >> M >> D;

    WhatWeather();
    
    return 0;
}