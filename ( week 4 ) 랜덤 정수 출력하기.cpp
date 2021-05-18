#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

class Random {
	int num;
public:
	Random(); //�⺻ ������
	int next();
	int nextInRange(int a, int b); //Ȧ�� ���� ����ϱ� ���ؼ� a,b ���
};
/* Ŭ������ �׻� �����ݷ����� ������ ����� �� */

Random::Random() {
	srand(time(0));
	/*time ���� ������ seed���� �ʴ����� ����ؼ� �����ϱ� ������
	������ ������ ������ ������ ������ ���� �� ���� */
}

int Random::next() {
	int rand2 = rand();
	if (num % 2 == 0) { //¦���϶�
		if (rand2 % 2 == 0)
			return rand2;
		else
			return --rand2;
	}
	else {				//Ȧ���϶�
		if (rand2 % 2 == 0)
			return ++rand2;
		else
			return rand2;
	}
}


int Random::nextInRange(int a, int b) {
	return (((rand() % (b - a + 1) + a) / 2) * 2) - 1; // a~b ���� �߿� Ȧ���� ����
}

int main() {
	int x, y, i;

	Random a; //RandomŬ������ a��ü 
	cout << "--0���� " << RAND_MAX << "������ ¦�� ���� ���� 10��--" << endl;
	for (x = 0; x < 10; x++) {
		int n = a.next();
		cout << n << "  ";
	}
	cout << endl;

	int arr[10];
	bool check;

	Random b; //RandomŬ������ b��ü 
	cout << "==2���� 30������ Ȧ�� ���� ���� 10��(��, �ߺ��Ǵ� ���� ����� ��)==" << endl;
	for (y = 0; y < 10; y++) {
		arr[y] = b.nextInRange(4, 30); //�ߺ����ֱ�
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


