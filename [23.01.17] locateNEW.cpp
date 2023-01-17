#include <iostream>
#include <new>
const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main() {
	using namespace std;
	double* pd1, * pd2;											// 포인터 선언
	int i;
	cout << "new와 위치 지정 new의 첫 번째 호출:\n";
	pd1 = new double[N];										// 동적 메모리 소수 배열 선언 및 포인터에 대입 
	pd2 = new(buffer) double[N];								// 지정 위치 동적 메모리 소수 배열 선언 및 포인터에 대입
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0 * i;						// 배열의 크기 만금 20이 곱해지는 수를 각 배열에 대입
	cout << "메모리 주소:\n" << pd1 << " : 힙;    "				// 동적 배열이라 힙에 들어감
		<< (void*)buffer << " : 정적" << endl;					// bugger은 512개의 원소를 가진 배열, 이에 대한 포인터 출력(정적)
	cout << "메모리 내용: \n";
	for (i = 0; i < N; i++) {
		cout << &pd1[i] << "에 " << pd1[i] << "; ";				// pd1의 주소 및 수 출력
		cout << &pd2[i] << "에 " << pd2[i] << endl;				// pd2의 주소 및 수 출력
	}
	cout << "\nnew와 위치 지정 new의 두 번째 호출:\n";
	double* pd3, * pd4;
	pd3 = new double[N];
	pd4 = new (buffer) double[N];
	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0 * i;
	cout << "메모리 내용:\n";
	for (i = 0; i < N; i++) {
		cout << &pd3[i] << "에 " << pd3[i] << "; ";
		cout << &pd4[i] << "에 " << pd4[i] << endl;
	}

	cout << "\nnew와 위치 지정 new의 세 번째 호출:\n";
	delete[] pd1;
	pd1 = new double[N];											// 1번을 삭제 후 새로운 동적 배열 대입
	pd2 = new (buffer + N * sizeof(double)) double[N];				// pd2 위에 새로운 위치 지정 배열 대입
	for (i = 0; i < N; i++) 
		pd2[i] = pd1[i] = 1000 + 60.0 * i;
	cout << "메모리 내용:\n";
	for (i = 0; i < N; i++) {										// 다시 출력
		cout << &pd1[i] << "에 " << pd1[i] << "; ";
		cout << &pd2[i] << "에 " << pd2[i] << endl;
	}
	delete[] pd1;													// 1, 3 해제
	delete[] pd3;
	return 0;
}