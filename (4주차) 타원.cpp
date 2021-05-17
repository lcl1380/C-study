#include <iostream>
using namespace std;

class Circle {
	int A, B; //�ʱ� �� ���� ����
public:
	Circle(); //�⺻������
	~Circle(); //�Ҹ���

	Circle(int x, int y); // x:�ʺ�  y:���� �� ����

	int getA(); //A�� ����
	int getB(); //B�� ����

	int set(int x, int y); //�ʺ�, ���� �������ִ� �Լ�

	double Area(); //Ÿ���� ���� ���ϴ� �Լ�
};

Circle::Circle() { //A, B�� 1�� �ʱ�ȭ
	A = 1;
	B = 1;

	/* ���� ������
	Circle::Circle(1, 1) {} */
}

Circle::~Circle() { //�Ҹ���
	cout << "Oval �Ҹ� : width = " << A << "height" << B << endl;
}

Circle::Circle(int x, int y) {
	A = x; //A���� x����,
	B = y; //B���� y���� ����
}

int Circle::getA() {
	return A;
}

int Circle::getB() {
	return B;
}

int Circle::set(int x, int y) {
	A = x;
	B = y;
}

double Circle::Area() {
	int size = A * B * 3.14;
}

int main() {
	Circle a; //��ü �̸��� ���� a,b�� ����
	Circle b(3, 4);
	a.set(5, 6); //a���� ������ ���� �����Ƿ� set ���

	double a_area = a.Area();// ��ü a�� ����
	double b_area = b.Area();// ��ü b�� ����

	cout << "Ÿ���� ���̴�" << a.Area() << "�̴�. (��ü a�� ����)" << endl;
	cout << "Ÿ���� ���̴�" << b.Area() << "�̴�. (��ü b�� ����)" << endl;

}