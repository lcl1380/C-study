#include <iostream>
using namespace std;

class Circle {
	int A, B; //초기 원 가로 반지름, 세로 반지름
public:
	Circle(); //기본생성자
	Circle(int x, int y); // x : 너비  y : 높이
	~Circle(); //소멸자

	int getA(); //A값 리턴
	int getB(); //B값 리턴

	void set(int x, int y); //반지름 설정해주는 함수

	double Area(); //타원의 넓이 구하는 함수
};

Circle::Circle() { //A, B값 1로 초기화
	A = 1;
	B = 1;

	/* 위임 생성자
	Circle::Circle(1, 1) {} */
}


Circle::Circle(int x, int y) {
	A = x;
	B = y;
}

Circle::~Circle() {
	cout << "Oval 소멸 : width = " << A << " height = " << B << endl;
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
	Circle a; //객체 이름은 각각 a,b로 설정
	Circle b(3, 4);
	a.set(10, 20); //a에는 지정된 값이 없으므로 set 사용

	double a_area = a.Area();// 객체 a의 넓이
	double b_area = b.Area();// 객체 b의 넓이

	cout << "타원의 넓이는" << a_area << "이다. (객체 a의 넓이)" << endl;
	cout << "타원의 넓이는" << b_area << "이다. (객체 b의 넓이)" << endl;

}