#include <iostream>
using namespace std;
int main() {
	int movie, choice = 0;
	int a, b;
	int choice_seat[4][10] = { 0 };

	cout << "************** SWING CINEMA ������ ��ȭ **************" << endl;
	cout << "1. �ٵ�" << endl;
	cout << "2. �����ε�" << endl;
	cout << "3. ������!" << endl;
	cout << "4. ��ȭ ���� ����" << endl;
	cout << "��ȭ�� �����ϼ���. (1,2,3)";
	cin >> movie;

	if (movie == 1) {
		cout << "���� �� �������ּ���." << endl;
		cout << "1. �¼� ����" << endl;
		cout << "2. ���� ���" << endl;
		cout << "3. ���� ����" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "������ �¼��� ������ �����ϴ�." << endl;
			cout << "-------------------------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "-------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << choice_seat[a][b] << " ";
				}
				cout << endl;
			}
		}
	}

	while (choice == 1) {
		int seat_x, seat_y, back;
		cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? (�������� ���ư����� 0 �Է�)" << endl;
		cin >> seat_x;
		cin >> seat_y;

		if (choice_seat[seat_x][seat_y - 1] == 0) {
			cout << "����Ǿ����ϴ�." << endl;
			choice_seat[seat_x][seat_y - 1] = 1;
			cout << "-------------------------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "-------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << choice_seat[a][b] << " ";
				}
				cout << endl;
			}
		}
		
		else if (choice_seat[seat_x][seat_y - 1] == 1)
			cout << "�̹� ����� �ڸ��Դϴ�." << endl;

		else if (seat_x == 0) 
			break; //0�Է��ϸ� while������ ���ư��°� ��������??
		

	}

	if (movie == 2) {
		int seatback_x;
		int seatback_y;
		cout << "     ���� ����� �¼� ��Ȳ     " << endl;
		cout << "-------------------------------" << endl;
		cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
		cout << "-------------------------------" << endl;
		for (a = 1; a < 4; a++) {
			for (b = 0; b < 10; b++) {
				cout << " " << choice_seat[a][b] << " ";
			}
			cout << endl;
		}
		cout << "�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�?" << endl;
		cin >> seatback_x;
		cin >> seatback_y;
		if (choice_seat[seatback_x][seatback_y - 1] == 1) {
			cout << "���� ��� �Ǿ����ϴ�." << endl;
			choice_seat[seatback_x][seatback_y - 1] = 0;
			cout << "-------------------------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "-------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << choice_seat[a][b] << " ";
				}
				cout << endl;
			}
		}
	}
}
	