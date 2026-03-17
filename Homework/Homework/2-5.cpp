#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
  
    cout << " 정사각형 " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << string(5, '*') << endl;
    }

    cout << " 직사각형 " << endl;
    for (int i = 0; i < 3; ++i) {
        cout << string(10, '*') << endl;
    }

    cout << " 삼각형 " << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << string(i, '*') << endl;
    }

    return 0;
}