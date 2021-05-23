#include <iostream>
#include <string>
using namespace std;

/* �����, ������, ��� ���Ϸ� ������ �ۼ��ϰ� �־��µ� 
�� �߸� �ǵ�ȴ��� ������ �ۼ��ϸ� ��� ���� ������ �ߴ��󱸿� .. ���� */


class VendingMachine {

private:
	string name; // ���� �̸� (�Է¹�����
	int price; // ���� (�Է¹��� ���� ����
	int total; // ���� �ջ� ��


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
	int returngap = 200; // ���Ǳ� �ʱ� ���� �Ž�����(100��¥��) ����
	int money = 0; //�Է¹��� �� ����
	int usereturngap = 0; // ����� ���Ǳ� �Ž�����(100��¥��) ����
	
};

int drink_price;

VendingMachine::VendingMachine() : name(" "), price(0), total(0) {}

void VendingMachine::menu() {

	VendingMachine drinkName[3]; //����� ���� ����
	drinkName[0].setName("��ī�ݶ�");
	drinkName[1].setName("ĥ�����̴�");
	drinkName[2].setName("�̿���ȭ�̹�");
	// drinkName[3].setName("�غ���");
	
	VendingMachine* startName;
	startName = drinkName;

	VendingMachine drinkPrice[3]; //����� ���� ����
	drinkPrice[0].setPrice(1200);
	drinkPrice[1].setPrice(1400);
	drinkPrice[2].setPrice(1800);
	// drinkPrice[3].setPrice(0);

	VendingMachine* startPrice;
	startPrice = drinkPrice;

	cout << " ========== SWING ���Ǳ� ========== " << endl;
	for (int x = 1; x <= 3; x++) {
		cout << x << " . " << (*startName++).getName() << " : " << (*startPrice++).getPrice() << endl;
	}

	cout << "4. �غ���" << endl;
	cout << "5. ���" << endl;
	cout << "6. ����" << endl;
	cout << endl;

	cout << "�߰��� ���� �̸��� �Է����ּ��� : ";
	cin >> name;

	cout << "�Ǹ��� ������ �Է��ϼ��� : ";
	cin >> drink_price;
	cout << endl;

}
void VendingMachine::upgrademenu() {

	VendingMachine drinkName[4]; //����� ���� ����
	drinkName[0].setName("��ī�ݶ�");
	drinkName[1].setName("ĥ�����̴�");
	drinkName[2].setName("�̿���ȭ�̹�");
	drinkName[3].setName(name);

	VendingMachine* startName;
	startName = drinkName;

	VendingMachine drinkPrice[4]; //����� ���� ����
	drinkPrice[0].setPrice(1200);
	drinkPrice[1].setPrice(1400);
	drinkPrice[2].setPrice(1800);
	drinkPrice[3].setPrice(drink_price);

	VendingMachine* startPrice;
	startPrice = drinkPrice;

	cout << " ========== SWING ���Ǳ� ========== " << endl;
	for (int x = 1; x <= 4; x++) {
		cout << x << " . " << (*startName++).getName() << " : " << (*startPrice++).getPrice() << endl;
	}

	cout << "5. ���" << endl;
	cout << "6. ����" << endl;
	cout << endl;
}

void VendingMachine::purchase(double v1) {
	/* cout << "�� �ݾ� : " << getTotal() << endl;
	cout << "���� �Է��ϼ��� : ";
	cin >> money; */

	while (1) {
		cout << "�� �ݾ� : " << getTotal() << endl;
		cout << "���� �Է��ϼ��� : ";
		cin >> money;

		if (total == money) {
			cout << "�Ž������� �����ϴ�. �ȳ��� ������" << endl;
			cout << "��⿡ ���� �Ž����� (100������)" << returngap << endl;
			break; // �ѱݾ� == �Է±ݾ��̸� ���α׷� ����
		}
		
		else if (money < total) { // �Է±ݾ� < �ѱݾ�
			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���" << endl;
			cout << endl;
			continue;
		}
		else if (money > total) { // �Է±ݾ� > �ѱݾ�
			int rest = money - total;//rest�� �Է±ݾ׿��� �� �ݾ��� �� �ܵ� ����

			//�Ž����� ��⳻���� �ټ��ִ� �����϶�
			if ((rest / 100) <= returngap) { //�����ݾ� ������ 100�� ���� �ܵ����� ���ų� ������
				if (rest % 100 == 1) { // �����ݾ��� 100���� ������������ �������� 1�϶�
					cout << "�Ž������� 100���� �����մϴ�." << endl;
				}
				else if (rest % 100 == 50) {  // �����ݾ��� 100���� ������������ �������� 50�϶�
					cout << "�Ž������� 100���� �����մϴ�." << endl;
				}
				usereturngap = rest / 100;
				cout << "�Ž��� ���Դϴ�." << endl;
				cout << "100�� : " << usereturngap << "��" << endl;
				
				cout << "��⿡ ���� �Ž�����(100�� ����) : " << returngap - usereturngap << "��" << endl;
				break;
			}

			else if ((rest / 100) > returngap) { //��� ������ �� �� �ִ� ���� �ƴҶ�
				cout << "�Ž��� ���Դϴ�." << endl;
				cout << "��⳻�� �ܵ��� �����մϴ�. 010-0000-0000���� �����ּ���" << endl;
				usereturngap = rest / 100 - 200;
				returngap = 0;
				cout << "��⿡ ���� �Ž�����(100�� ����) : " << returngap << endl;
				// cout << "������ �Ž�����(100�� ����) : " << usereturngap << endl;
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

	int num, coke, soda, bitamin, unknown; //drinkName �迭�� �ִ� ������� ����

	while (1) {// �ݾ� ���
		
		cout << endl;
		cout << "��ȣ�� �������ּ��� : ";
		cin >> num;
		

		if (num == 1) {
			cout << "������ ������ �Է����ּ��� : ";
			cin >> coke;
			cout << endl;
		}

		else if (num == 2) {
			cout << "������ ������ �Է����ּ��� : ";
			cin >> soda;
			cout << endl;
		}

		else if (num == 3) {
			cout << "������ ������ �Է����ּ��� : ";
			cin >> bitamin;
			cout << endl;
		}

		else if (num == 4) {
			cout << "������ ������ �Է����ּ��� : ";
			cin >> unknown;
			cout << endl;
		}

		else if (num == 5) {
			cout << "��� ���Դϴ�. ��ٷ��ּ��� . . . . " << endl;
			cout << endl;

			drink.setTotal((1200 * coke) + (1400 * soda) + (1800 * bitamin) + (drink_price * unknown));
			drink.purchase(1);

		}
		else if (num == 6) {
			break;
		}
	}
}