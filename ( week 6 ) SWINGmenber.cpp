#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class SWINGmember {
private:
	int kisu; //���
	char* name; //�̸�
public:
	SWINGmember(); //�Ű����� ���� ������
	SWINGmember(int n, const char* name); //�Ű����� �ִ� ������
	~SWINGmember(); //�Ҹ���
	SWINGmember(SWINGmember& origin); //���������
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
	cout << "�Ű����� �ִ� ������ ����" << endl;
}
 
SWINGmember::SWINGmember(SWINGmember& origin) {
	this->kisu = origin.kisu;
	int len = strlen(origin.name);
	this->name = new char[len + 1]; //������üname���� 1ū ĳ������ ����
	strcpy(this->name, origin.name);
	cout << "��������� ����. ���� ��ü�� �̸� : " << origin.name << endl;
}

SWINGmember::~SWINGmember() {
	cout << name << " �Ҹ�(�Ҹ��� ����) " << endl;
}

void SWINGmember::info() {
	cout << "SWING " << kisu << "�� " << name << endl;
}
 
void SWINGmember::changeName(const char* name) {
	strcpy(this->name, name); //��ü b�� �̸��� �ٲٴµ� ���
}

int main() {
	SWINGmember a(29, "��ī��");
	SWINGmember b(a);
	a.info();
	b.info();
	b.changeName("������");
	return 0;
}