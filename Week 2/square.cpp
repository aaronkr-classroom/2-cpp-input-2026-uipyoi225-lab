#include<iostream>
//표준 라이브러리에서 가져와서 사용할 이름을 언급

using std::cin;
using std::cout;
using std::endl;
int main(void) {
	cout << "1. square or 2. Rect>>>";
	int option;
	cin >> option;

	if (option != 1 && option != 2) {
		cout << "error : only choose 1 or 2 !";
		return 0x34AF;
	}
	cout << "what size square?";

	int size;
	cin >> size; //10

	//행 출력
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (option == 1) { 
				cout << "*";   //10x10 정사각형
			}
			else if (option == 2) {
				cout << "**"; //20x10직사각형
			}
			else {
				cout << "error : only choose 1 or 2 !";
				return 0x34AF;
			}
			cout << "*";
		}
		//행 끝 줄 바꿈
		cout << endl;
	}
	return 0;
}