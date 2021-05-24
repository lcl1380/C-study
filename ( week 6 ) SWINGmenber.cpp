#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class SWINGmember {
private:
	int kisu; //기수
	char* name; //이름
public:
	SWINGmember(); //매개변수 없는 생성자
	SWINGmember(int n, const char* name); //매개변수 있는 생성자
	~SWINGmember(); //소멸자
	SWINGmember(SWINGmember& origin); //복사생성자
	void info();
	void changeName(const char* name);
};

SWINGmember::SWINGmember() {
	kisu = 00;
}

SWINGmember::SWINGmember(int n, const char* name) {
	kisu = n;
	this->name = new char[7];
	strcpy(this->name, name);
	cout << "매개변수 있는 생성자 실행" << endl;
}
 
SWINGmember::SWINGmember(SWINGmember& origin) {
	this->kisu = origin.kisu;
	int len = strlen(origin.name);
	this->name = new char[len + 1]; //원본객체name보다 1큰 캐릭터형 선언
	strcpy(this->name, origin.name);
	cout << "복사생성자 실행. 원본 객체의 이름 : " << origin.name << endl;
}

SWINGmember::~SWINGmember() {
	cout << name << " 소멸(소멸자 실행) " << endl;
}

void SWINGmember::info() {
	cout << "SWING " << kisu << "기 " << name << endl;
}
 
void SWINGmember::changeName(const char* name) {
	strcpy(this->name, name); //객체 b의 이름을 바꾸는데 사용
}

int main() {
	SWINGmember a(29, "피카츄");
	SWINGmember b(a);
	a.info();
	b.info();
	b.changeName("라이츄");
	return 0;
}