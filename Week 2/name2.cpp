//name2.cpp
#include<iostream>
#include<string>
//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin; using std::cout;
using std::endl; using std::string;
int main(void) {
	//이름을 물음
	cout << "first name: >>";
	string name;
	cin >> name;
	//출력하려는 메시지를 구성
	const string greeting = "hello, " + name + "!";

	/*
	******************
	*                *
	*  hello Aaron ! *
	*                *
	******************
			 */
	//인사말을 둘러싼 공백의 개수
	const int pad = 3;
	//출력할 행과 열 개수
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;
			
// 인사말의 2번째 행과 4번째 행 
	cout << endl;
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
		while (c != cols) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//테두리 출력여부를 판별
				if (r == 0 || r == rows - 1 ||  //첫행이나 마지막 행
					c == 0 || c == cols - 1)
					cout << "*";
				else{
					cout << " ";
				}
				++c;

			}//if else 끝
		}//while 끝
		cout << endl;
	}//for끝


	return 0;

}