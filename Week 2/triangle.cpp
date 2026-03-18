#include<iostream>
//표준 라이브러리에서 가져와서 사용할 이름을 언급

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	
	cout << "what size triangle?";

	int size;
	cin >> size; //10

	//행 출력
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			
				cout << " ";  
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
         cout << endl;
	}
		//행 끝 줄 바꿈
		
	return 0;
}