#include <iostream>
#include <string.h>
using namespace std;

int myaccounts(string* bank_name, int* bank_money) { //���� ���� �� �ݾ� ���
	int x, y;//for���� ���� ����
	cout << "*********** SWING �ڻ���� ���� ***********" << endl;
	cout << "============== ���� �� �������� ==============" << endl;
	for (x = 0; x < 4; x++) { //���� �̸� ���
		cout << "  " << bank_name[x] << "  ";
	}
	cout << endl;

	for (y = 0; y < 4; y++) {//���� ���¿� �ִ� �� ���
		if (bank_money[y] == 0) {//���� �ݾ��� 0�̸� ���¾��� ���
			cout << "���¾���";
		}
		cout << "  " << bank_money[y] << "  ";
		/* if (bank_money[y] == 10)
			cout << "10";
		cout << "  " << bank_money[y] << "  ";  //0��� �ȵǰ� �ϰ� ������ �� ������� �𸣰ھ��...�̤�
		*/
	}
	cout << endl;
	return *bank_money;
	

}

int total (int *bank, int tbank_money) {//bank�� �ݾ� ���� �� = tbank_money�� 
	int tt;
	int totalmoney = 0;
	for (tt = 0; tt < 4; tt++) {
		totalmoney = totalmoney + bank[tt];
	}
	tbank_money = totalmoney;
	return tbank_money;
	}



int main(void) {

	int total_money =  0;
	int bank[4] = { 5000,4000,0,10 };
	string bank_name[4] = { "�ϳ�", "�츮", "����", "����" };

	/* bank_name�ϰ� bank�� ���� ������ bankname, money�� ������ */
	string* bankname;
	bankname = &bank_name[0];

	int* money;
	money = &bank[0];

	myaccounts(bankname, bank);
	total(bank,total_money); 
	
	
	
	cout << "==============================================" << endl;
	cout << "���� SWING �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ��� "<< total(bank,total_money) << "�� �Դϴ�." << endl;
	cout << "**********************************************" << endl;
	return 0;
}