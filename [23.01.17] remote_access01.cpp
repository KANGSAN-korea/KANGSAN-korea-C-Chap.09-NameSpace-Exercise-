﻿#include <iostream>
const int ArSize() = 10;

void strcount(const char* str);
int main() {
	using namespace std;
	char input[ArSize];
	char next;

	cout << "영문으로 한 행을 입력하십시오: \n";
	cin.get(input, ArSize);													// 문자열 입력 받음,

	while (cin) {
		cin.get(next);														// 문자열을 net 대입
		while (next != '\n')												// 10개 초과 시 삭제
			cin.get(next);
		strcount(input);													// 문자열 크기 카운트
		cout << "다음 행을 입력하십시오 (끝내려면 빈 행을 입력):\n";
		cin.get(input, ArSize);
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

void strcount(const char* str) {
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\"에는 ";
	while (*str++)
		count++;
	total += count;
	cout << count << "개의 문자가 있습니다.\n";
	cout << "지금까지 총" << total << "개의 문자를 입력하셨습니다.\n";
}