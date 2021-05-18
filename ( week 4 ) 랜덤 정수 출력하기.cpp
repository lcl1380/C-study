#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

class Random {
	int num;
public:
	Random(); //기본 생성자
	int next();
	int nextInRange(int a, int b); //홀수 난수 출력하기 위해서 a,b 사용
};
/* 클래스는 항상 세미콜론으로 마무리 해줘야 함 */

Random::Random() {
	srand(time(0));
	/*time 쓰는 이유는 seed값을 초단위로 계속해서 변경하기 때문에
	실행할 때마다 랜덤한 난수의 값들을 얻을 수 있음 */
}

int Random::next() {
	int rand2 = rand();
	if (num % 2 == 0) { //짝수일때
		if (rand2 % 2 == 0)
			return rand2;
		else
			return --rand2;
	}
	else {				//홀수일때
		if (rand2 % 2 == 0)
			return ++rand2;
		else
			return rand2;
	}
}


int Random::nextInRange(int a, int b) {
	return (((rand() % (b - a + 1) + a) / 2) * 2) - 1; // a~b 범위 중에 홀수의 난수
}

int main() {
	int x, y, i;

	Random a; //Random클래스의 a객체 
	cout << "--0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개--" << endl;
	for (x = 0; x < 10; x++) {
		int n = a.next();
		cout << n << "  ";
	}
	cout << endl;

	int arr[10];
	bool check;

	Random b; //Random클래스의 b객체 
	cout << "==2에서 30까지의 홀수 랜덤 정수 10개(단, 중복되는 값이 없어야 함)==" << endl;
	for (y = 0; y < 10; y++) {
		arr[y] = b.nextInRange(4, 30); //중복없애기
		for (x = 0; x < y; x++) {
			if (arr[y] == arr[x]) {
				y--;
				break;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


