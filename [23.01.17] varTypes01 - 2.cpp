#include <iostream>
extern double warming; // 외부로 부터 받아옴 0.3
void update(double dt); 
void local();

using std::cout;

void update(double dt) {
	extern double warming;	// 0.3
	warming += dt;
	cout << "전역 warming이" << warming;
	cout << "도로 갱신되었습니다.\n";
}

void local() {
	double warming = 0.8;
	cout << "지역 warming은 " << warming << "도입니다.\n";
	cout << "그러나, 전역 warming은 " << ::warming;
	cout << "도입니다.\n";
}