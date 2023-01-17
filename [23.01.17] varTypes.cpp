#include <iostream>
void oil(int x);
int main() {
	using namespace std;

	int texas = 31;
	int year = 2011;
	cout << "main()에서, texas = " << texas << ", &texas = ";
	cout << &texas << endl;												// 31과 주소
	cout << "main()에서, year = " << year << ", &year = ";
	cout << &year << endl;												// 2011과 주소
	oil(texas);
	cout << "main() 에서, texas = " << texas << ", &texas = ";
	cout << &texas << endl;												
	cout << "main()에서, year = " << year << ", &year = ";
	cout << &year << endl;
	return 0;
}

void oil(int x) {
	using namespace std;
	int texas = 5;
	cout << "oil()에서, texas = " << texas << ", &texas = ";			// 5
	cout << &texas << endl;												// 원본 주소
	cout << "oil()에서, x = " << x << ", &x = ";
	cout << &x << endl;													// 매개변수, 임의 주소, 31값 받아와 복사
	{
		int texas = 113;
		cout << "블록에서, texas = " << texas;							// 113, x 값은 위랑 같음
		cout << "블록에서, x = " << x << ", &x = ";
		cout << &x << endl;
	}
	cout << "블록을 통과한 후, texas = " << texas;						// 블록 통과 후 5, 원본 주소
	cout << ", &texas = " << &texas << endl;
}