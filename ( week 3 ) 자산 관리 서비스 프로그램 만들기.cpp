#include <iostream>
#include <string.h>
using namespace std;

int myaccounts(string* bank_name, int* bank_money) { //은행 계좌 별 금액 출력
	int x, y;//for문에 각각 써줌
	cout << "*********** SWING 자산관리 서비스 ***********" << endl;
	cout << "============== 은행 별 계좌정보 ==============" << endl;
	for (x = 0; x < 4; x++) { //은행 이름 출력
		cout << "  " << bank_name[x] << "  ";
	}
	cout << endl;

	for (y = 0; y < 4; y++) {//은행 계좌에 있는 돈 출력
		if (bank_money[y] == 0) {//계좌 금액이 0이면 계좌없음 출력
			cout << "계좌없음";
		}
		else {
			cout << "  " << bank_money[y] << "  ";
		}
	}
	cout << endl;
	return *bank_money;
	

}

int total (int *bank, int *t_money) {//bank의 금액 더한 값 = tbank_money로 
	int tt;
	int totalmoney = 0;
	for (tt = 0; tt < 4; tt++) {
		totalmoney = totalmoney + bank[tt];
	}
	*t_money = totalmoney;
	return *t_money;
	}



int main(void) {

	int total_money =  0;
	int bank[4] = { 5000,4000,0,10 };
	string bank_name[4] = { "하나", "우리", "신한", "국민" };

	/* bank_name하고 bank를 각각 포인터 bankname, money로 지정함 */
	string* bankname;
	bankname = &bank_name[0];

	int* money;
	money = &bank[0];

	int* t_money;
	t_money = &total_money;
	
	myaccounts(bankname, bank);
	total(bank,t_money); 
	
	
	
	cout << "==============================================" << endl;
	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은 "<< total(bank,t_money) << "원 입니다." << endl;
	cout << "**********************************************" << endl;
	return 0;
}
