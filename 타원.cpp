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
	/*time ���� ������ seed���� �ʴ����� ����ؼ� ��ȭ�ϰ� �ϱ� ������
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
	return rand() % (b - a + 1) + a;
}

int main() {
	int x, y, i, z;

	Random a; //RandomŬ������ a��ü 
	cout << "--0���� " << RAND_MAX << "������ ¦�� ���� ���� 10��--" << endl;
	for (x = 0; x < 10; x++) {
		int n = a.next();
		cout << n << "  ";
	}
	cout << endl;

	int arr[10];
	
	Random b; //RandomŬ������ b��ü 
	cout << "==2���� 30������ Ȧ�� ���� ���� 10��(��, �ߺ��Ǵ� ���� ����� ��)==" << endl;
	for (y = 0; y < 10; y++) {
		arr[y] = b.nextInRange(2, 30); //������� 2~30 ������ �� ��µ�, �ߺ����ֱ�
		while (true) {
			
			if (check(arr[y]) == false)
				continue;
			arr[y] = number;
			break;
		}
	}

	bool check(int number) {
		for (int z = 0; z < 10; i++) {
			if (number == arr[y])
				return false;
		}
		return true;
	}
	
	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


