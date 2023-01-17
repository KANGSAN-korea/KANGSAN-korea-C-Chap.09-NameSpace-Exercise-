#include <iostream>
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main() {
	using namespace std;
	cout << "main()이 보고하는 세 변수의 주소:\n";
	cout << &tom << " &=tom, " << &dick << " = &dick, "; // 전역 변수 톰(3)의 주소, 전역 변수 딕(30)의 주소
	cout << &harry << " = &harry\n";					 // 내부링크 해리(300) 주소 
	remote_access();									 // 전역변수 톰(3) 주소, 내부링크 변수 딕(10) 주소
														 //  해리(200)도 지역 취급
	return 0;
}
