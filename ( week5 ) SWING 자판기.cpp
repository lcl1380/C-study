#include <iostream>
#include <string>
using namespace std;

/* 선언부, 구현부, 헤더 파일로 나눠서 작성하고 있었는데 
뭘 잘못 건드렸는지 나눠서 작성하면 계속 실행 오류가 뜨더라구요 .. 왜지 */


class VendingMachine {

private:
	string name; // 음료 이름 (입력받은거
	int price; // 가격 (입력받은 음료 가격
	int total; // 음료 합산 값


public:
	VendingMachine();
	void purchase(double v1);
	void menu();
	void upgrademenu();
	string getName();
	double getPrice();
	double getTotal();
	void setName(string n);
	void setPrice(int p);
	void setTotal(int t);
	int returngap = 200; // 자판기 초기 내부 거스름돈(100원짜리) 개수
	int money = 0; //입력받은 돈 저장
	int usereturngap = 0; // 사용한 자판기 거스름돈(100원짜리) 개수
	
};

int drink_price;

VendingMachine::VendingMachine() : name(" "), price(0), total(0) {}

void VendingMachine::menu() {

	VendingMachine drinkName[3]; //음료수 종류 저장
	drinkName[0].setName("코카콜라");
	drinkName[1].setName("칠성사이다");
	drinkName[2].setName("미에로화이바");
	// drinkName[3].setName("준비중");
	
	VendingMachine* startName;
	startName = drinkName;

	VendingMachine drinkPrice[3]; //음료수 가격 저장
	drinkPrice[0].setPrice(1200);
	drinkPrice[1].setPrice(1400);
	drinkPrice[2].setPrice(1800);
	// drinkPrice[3].setPrice(0);

	VendingMachine* startPrice;
	startPrice = drinkPrice;

	cout << " ========== SWING 자판기 ========== " << endl;
	for (int x = 1; x <= 3; x++) {
		cout << x << " . " << (*startName++).getName() << " : " << (*startPrice++).getPrice() << endl;
	}

	cout << "4. 준비중" << endl;
	cout << "5. 계산" << endl;
	cout << "6. 종료" << endl;
	cout << endl;

	cout << "추가할 음료 이름을 입력해주세요 : ";
	cin >> name;

	cout << "판매할 가격을 입력하세요 : ";
	cin >> drink_price;
	cout << endl;

}
void VendingMachine::upgrademenu() {

	VendingMachine drinkName[4]; //음료수 종류 저장
	drinkName[0].setName("코카콜라");
	drinkName[1].setName("칠성사이다");
	drinkName[2].setName("미에로화이바");
	drinkName[3].setName(name);

	VendingMachine* startName;
	startName = drinkName;

	VendingMachine drinkPrice[4]; //음료수 가격 저장
	drinkPrice[0].setPrice(1200);
	drinkPrice[1].setPrice(1400);
	drinkPrice[2].setPrice(1800);
	drinkPrice[3].setPrice(drink_price);

	VendingMachine* startPrice;
	startPrice = drinkPrice;

	cout << " ========== SWING 자판기 ========== " << endl;
	for (int x = 1; x <= 4; x++) {
		cout << x << " . " << (*startName++).getName() << " : " << (*startPrice++).getPrice() << endl;
	}

	cout << "5. 계산" << endl;
	cout << "6. 종료" << endl;
	cout << endl;
}

void VendingMachine::purchase(double v1) {
	/* cout << "총 금액 : " << getTotal() << endl;
	cout << "지폐를 입력하세요 : ";
	cin >> money; */

	while (1) {
		cout << "총 금액 : " << getTotal() << endl;
		cout << "지폐를 입력하세요 : ";
		cin >> money;

		if (total == money) {
			cout << "거스름돈이 없습니다. 안녕히 가세요" << endl;
			cout << "기기에 남은 거스름돈 (100원갯수)" << returngap << endl;
			break; // 총금액 == 입력금액이면 프로그램 종료
		}
		
		else if (money < total) { // 입력금액 < 총금액
			cout << "금액이 부족합니다. 다시 넣어주세요" << endl;
			cout << endl;
			continue;
		}
		else if (money > total) { // 입력금액 > 총금액
			int rest = money - total;//rest에 입력금액에서 총 금액을 뺀 잔돈 저장

			//거스름돈 기기내에서 줄수있는 범위일때
			if ((rest / 100) <= returngap) { //남은금액 나누기 100의 몫이 잔돈보다 같거나 적을때
				if (rest % 100 == 1) { // 남은금액을 100으로 나누었을때의 나머지가 1일때
					cout << "거스름돈은 100원만 가능합니다." << endl;
				}
				else if (rest % 100 == 50) {  // 남은금액을 100으로 나누었을때의 나머지가 50일때
					cout << "거스름돈은 100원만 가능합니다." << endl;
				}
				usereturngap = rest / 100;
				cout << "거스름 돈입니다." << endl;
				cout << "100원 : " << usereturngap << "개" << endl;
				
				cout << "기기에 남은 거스름돈(100원 개수) : " << returngap - usereturngap << "개" << endl;
				break;
			}

			else if ((rest / 100) > returngap) { //기기 내에서 줄 수 있는 범위 아닐때
				cout << "거스름 돈입니다." << endl;
				cout << "기기내의 잔돈이 부족합니다. 010-0000-0000으로 연락주세요" << endl;
				usereturngap = rest / 100 - 200;
				returngap = 0;
				cout << "기기에 남은 거스름돈(100원 개수) : " << returngap << endl;
				// cout << "부족한 거스름돈(100원 개수) : " << usereturngap << endl;
				break;
			}
		}
	}
}

string VendingMachine::getName() {
	return name;
}

double VendingMachine::getPrice() {
	return price;
}

double VendingMachine::getTotal() {
	return total;
}

void VendingMachine::setName(string n) {
	name = n;
}
void VendingMachine::setPrice(int p) {
	price = p;
}
void VendingMachine::setTotal(int t) {
	total = t;
}

int main() {
	VendingMachine drink;
	drink.menu();
	drink.upgrademenu();

	int num, coke, soda, bitamin, unknown; //drinkName 배열에 있는 순서대로 적용

	while (1) {// 금액 계산
		
		cout << endl;
		cout << "번호를 선택해주세요 : ";
		cin >> num;
		

		if (num == 1) {
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> coke;
			cout << endl;
		}

		else if (num == 2) {
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> soda;
			cout << endl;
		}

		else if (num == 3) {
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> bitamin;
			cout << endl;
		}

		else if (num == 4) {
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> unknown;
			cout << endl;
		}

		else if (num == 5) {
			cout << "계산 중입니다. 기다려주세요 . . . . " << endl;
			cout << endl;

			drink.setTotal((1200 * coke) + (1400 * soda) + (1800 * bitamin) + (drink_price * unknown));
			drink.purchase(1);

		}
		else if (num == 6) {
			break;
		}
	}
}