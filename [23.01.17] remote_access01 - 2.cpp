#include <iostream>
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main() {
	using namespace std;
	cout << "main()�� �����ϴ� �� ������ �ּ�:\n";
	cout << &tom << " &=tom, " << &dick << " = &dick, "; // ���� ���� ��(3)�� �ּ�, ���� ���� ��(30)�� �ּ�
	cout << &harry << " = &harry\n";					 // ���θ�ũ �ظ�(300) �ּ� 
	remote_access();									 // �������� ��(3) �ּ�, ���θ�ũ ���� ��(10) �ּ�
														 //  �ظ�(200)�� ���� ���
	return 0;
}
