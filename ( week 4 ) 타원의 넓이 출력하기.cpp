#include <iostream>
using namespace std;

class Circle {
	int A, B; //�ʱ� �� ���� ������, ���� ������
public:
	Circle(); //�⺻������
	Circle(int x, int y); // x : �ʺ�  y : ����
	~Circle(); //�Ҹ���

	int getA(); //A�� ����
	int getB(); //B�� ����

	void set(int x, int y); //������ �������ִ� �Լ�

	double Area(); //Ÿ���� ���� ���ϴ� �Լ�
};

Circle::Circle() { //A, B�� 1�� �ʱ�ȭ
	A = 1;
	B = 1;

	/* ���� ������
	Circle::Circle(1, 1) {} */
}


Circle::Circle(int x, int y) {
	A = x;
	B = y;
}

Circle::~Circle() {
	cout << "Oval �Ҹ� : width = " << A << " height = " << B << endl;
}

int Circle::getA() {
	return A;
}

int Circle::getB() {
	return B;
}

void Circle::set(int x, int y) {
	A = x;
	B = y;
}

double Circle::Area() {
	return (A/2) * (B/2) * 3.14;
}

int main() {
	Circle a; //��ü �̸��� ���� a,b�� ����
	Circle b(3, 4);
	a.set(10, 20); //a���� ������ ���� �����Ƿ� set ���

	double a_area = a.Area();// ��ü a�� ����
	double b_area = b.Area();// ��ü b�� ����

	cout << "Ÿ���� ���̴�" << a_area << "�̴�. (��ü a�� ����)" << endl;
	cout << "Ÿ���� ���̴�" << b_area << "�̴�. (��ü b�� ����)" << endl;

}