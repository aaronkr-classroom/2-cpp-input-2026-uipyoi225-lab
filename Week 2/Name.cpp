//name.cpp
#include<iostream>
#include<string>

int main(void) {
	//이름을 물음
	std::cout << "first name: >>";
	std::string name;
	std::cin >> name;
	//출력하려는 메시지를 구성
	const std::string greeting = "hello, " + name + "!";

	/*
	******************
	*                *
	*  hello Aaron ! *
	*                *
	******************
	         */
     // 인사말의 2번째 행과 4번째 행 
	
	const std::string spaces (greeting.size(),' ');
	
	const std::string second = "*" + spaces + "*";
	
	//인사말의 1번째행과 5번째 행 

	const std::string first(second.size(), '*');

	//모두 출력
	std::cout
		<< std::endl
		<< first << std::endl
		<< second << std::endl
		<< "*" << greeting << "*" << std::endl
		<< second << std::endl
		<< first << std::endl
		<< std::endl;

	return 0;

}