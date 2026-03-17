#include <iostream>

int main() {
    int num1, num2;
    std::cout << "비교할 두 숫자를 입력하세요: ";
    if (!(std::cin >> num1 >> num2)) return 1;

    if (num1 > num2) {
        std::cout << "더 큰 값은: " << num1 << std::endl;
    }
    else if (num2 > num1) {
        std::cout << "더 큰 값은: " << num2 << std::endl;
    }
    else {
        std::cout << "두 숫자는 같습니다." << std::endl;
    }
    return 0;
}