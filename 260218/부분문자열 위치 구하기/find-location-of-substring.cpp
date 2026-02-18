#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, target;
    std::cin >> input >> target;
    
    int input_len = input.length();
    int target_len = target.length();
    int idx = -1;

    for (int i=0; i<input_len-target_len; i++) {
        if (input.find(target) != string::npos)
            idx = input.find(target);
    }

    std::cout << idx;
    
    return 0;
}
