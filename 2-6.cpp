#include <iostream>

int main() {
    int i = 0;  //변수 지정
    while (i < 10) { //변수 i가 10보다 작을때가찌
        i += 1; //변수에 1씩 더하기
        std::cout << i << std::endl; //변수 i출력 후 줄바꿈 
    }
    return 0;
}
//0부터 시작해서 10까지 1씩 더하기