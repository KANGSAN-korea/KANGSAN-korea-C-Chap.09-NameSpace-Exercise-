#include <iostream>
extern double warming; // �ܺη� ���� �޾ƿ� 0.3
void update(double dt); 
void local();

using std::cout;

void update(double dt) {
	extern double warming;	// 0.3
	warming += dt;
	cout << "���� warming��" << warming;
	cout << "���� ���ŵǾ����ϴ�.\n";
}

void local() {
	double warming = 0.8;
	cout << "���� warming�� " << warming << "���Դϴ�.\n";
	cout << "�׷���, ���� warming�� " << ::warming;
	cout << "���Դϴ�.\n";
}