#include <iostream>
#include <string>
using namespace std;// std ����

int main()
{
	cout << "����� �̸��� �����Դϱ�? \n";
	string name;
	getline(cin, name);  //�̸��� ������ �����Ƿ� ������ ���� ���� �� �� �ִ� getline ���
	cout << "�ݰ����ϴ�." << name << "��" << endl;

	int apple, banana, orange; // ���� ���� ����
	int apple_a, banana_b, orange_o; // ���� ���� ����
	int total; //�Ѿ�

	cout << "apple�� ������ ���Դϱ�?";
	cin >> apple;
	cout << "banana�� ������ ���Դϱ�?";
	cin >> banana;
	cout << "orange�� ������ ���Դϱ�?";
	cin >> orange;

	cout << "apple�� � �ֽ��ϱ�?";
	cin >> apple_a;
	cout << "banana�� � �ֽ��ϱ�?";
	cin >> banana_b;
	cout << "orange�� � �ֽ��ϱ�?";
	cin >> orange_o;

	total = (apple * apple_a) + (banana * banana_b) + (orange * orange_o) - 500; //�Ѿ׿��� 500�� ����
	cout << "��" << total << "�� �Դϴ�.\n";

}