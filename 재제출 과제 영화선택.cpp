#include <iostream>
using namespace std;

int main() {
	int movie, choice = 0;
	int a, b;
	int dchoice_seat[4][10] = { 0 }; //'�ٵ�'�� �ڸ�
	int achoice_seat[4][10] = { 0 };//'�����ε�'�� �ڸ�
	int fchoice_seat[4][10] = { 0 };//'������!'�� �ڸ�
	
	while (1) {
		cout << "************** SWING CINEMA ������ ��ȭ **************" << endl;
		cout << "1. �ٵ�" << endl;
		cout << "2. �����ε�" << endl;
		cout << "3. ������!" << endl;
		cout << "4. ��ȭ ���� ����" << endl;
		cout << "��ȭ�� �����ϼ���. (1,2,3)";
		cin >> movie;

		while (movie == 1) {//'�ٵ�'�� �ڸ�        
			cout << "���� �� �������ּ���." << endl;
			cout << "1. �¼� ����" << endl;
			cout << "2. ���� ���" << endl;
			cout << "3. ���� ����" << endl;
			cin >> choice;
			while (choice == 1) {
				cout << "������ �¼��� ������ �����ϴ�." << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << dchoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				int dseat_x, dseat_y;
				cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?" << endl;
				cin >> dseat_x;
				cin >> dseat_y;

				if (dchoice_seat[dseat_x][dseat_y - 1] == 0) {
					cout << "����Ǿ����ϴ�." << endl;
					dchoice_seat[dseat_x][dseat_y - 1] = 1;
					cout << "-------------------------------" << endl;
					cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
					cout << "-------------------------------" << endl;
					for (a = 1; a < 4; a++) {
						for (b = 0; b < 10; b++) {
							cout << " " << dchoice_seat[a][b] << " ";
						}
						cout << endl;
					}
				}

				else if (dchoice_seat[dseat_x][dseat_y - 1] == 1)
					cout << "�̹� ����� �ڸ��Դϴ�." << endl;
				
				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << endl;
				cin >> choice;

				if (choice == 1)
					continue;
				else
					break;
			}

			while (choice == 2) {
				int dseatback_x;
				int dseatback_y;
				cout << "     ���� ����� �¼� ��Ȳ     " << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << dchoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				cout << "�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�?" << endl;
				cin >> dseatback_x;
				cin >> dseatback_y;
				if (dchoice_seat[dseatback_x][dseatback_y - 1] == 1) {
					cout << "���� ��� �Ǿ����ϴ�." << endl;
					dchoice_seat[dseatback_x][dseatback_y - 1] = 0;
					cout << "-------------------------------" << endl;
					cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
					cout << "-------------------------------" << endl;
					for (a = 1; a < 4; a++) {
						for (b = 0; b < 10; b++) {
							cout << " " << dchoice_seat[a][b] << " ";
						}
						cout << endl;
					}
				}
				else if (dchoice_seat[dseatback_x][dseatback_y - 1] == 0)
					cout << "������� ���� �ڸ��Դϴ�." << endl;

				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << endl;
				cin >> choice;

				if (choice == 2)
					continue;
				else
					break;
			}

			while (choice == 3) {
				cout << "[�ٵ�] �¼� ���� ����" << endl;
				break;
			}
			break;
		}

		while (movie == 2) {//'�����ε�'�� �ڸ�        
			cout << "���� �� �������ּ���." << endl;
			cout << "1. �¼� ����" << endl;
			cout << "2. ���� ���" << endl;
			cout << "3. ���� ����" << endl;
			cin >> choice;
			while (choice == 1) {
				cout << "������ �¼��� ������ �����ϴ�." << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << achoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				int aseat_x, aseat_y;
				cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?" << endl;
				cin >> aseat_x;
				cin >> aseat_y;

				if (achoice_seat[aseat_x][aseat_y - 1] == 0) {
					cout << "����Ǿ����ϴ�." << endl;
					achoice_seat[aseat_x][aseat_y - 1] = 1;
					cout << "-------------------------------" << endl;
					cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
					cout << "-------------------------------" << endl;
					for (a = 1; a < 4; a++) {
						for (b = 0; b < 10; b++) {
							cout << " " << achoice_seat[a][b] << " ";
						}
						cout << endl;
					}
				}

				else if (achoice_seat[aseat_x][aseat_y - 1] == 1)
					cout << "�̹� ����� �ڸ��Դϴ�." << endl;

				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << endl;
				cin >> choice;

				if (choice == 1)
					continue;
				else
					break;
			}

			while (choice == 2) {
				int aseatback_x;
				int aseatback_y;
				cout << "     ���� ����� �¼� ��Ȳ     " << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << achoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				cout << "�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�?" << endl;
				cin >> aseatback_x;
				cin >> aseatback_y;
				if (achoice_seat[aseatback_x][aseatback_y - 1] == 1) {
					cout << "���� ��� �Ǿ����ϴ�." << endl;
					achoice_seat[aseatback_x][aseatback_y - 1] = 0;
					cout << "-------------------------------" << endl;
					cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
					cout << "-------------------------------" << endl;
					for (a = 1; a < 4; a++) {
						for (b = 0; b < 10; b++) {
							cout << " " << achoice_seat[a][b] << " ";
						}
						cout << endl;
					}
				}
				else if (achoice_seat[aseatback_x][aseatback_y - 1] == 0)
					cout << "������� ���� �ڸ��Դϴ�." << endl;

				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << endl;
				cin >> choice;

				if (choice == 2)
					continue;
				else
					break;
			}

			while (choice == 3) {
				cout << "[�����ε�] �¼� ���� ����" << endl;
				break;
			}
			break;
		}

		while (movie == 3) {//'������'�� �ڸ�        
			cout << "���� �� �������ּ���." << endl;
			cout << "1. �¼� ����" << endl;
			cout << "2. ���� ���" << endl;
			cout << "3. ���� ����" << endl;
			cin >> choice;
			while (choice == 1) {
				cout << "������ �¼��� ������ �����ϴ�." << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << fchoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				int fseat_x, fseat_y;
				cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?" << endl;
				cin >> fseat_x;
				cin >> fseat_y;

				if (fchoice_seat[fseat_x][fseat_y - 1] == 0) {
					cout << "����Ǿ����ϴ�." << endl;
					fchoice_seat[fseat_x][fseat_y - 1] = 1;
					cout << "-------------------------------" << endl;
					cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
					cout << "-------------------------------" << endl;
					for (a = 1; a < 4; a++) {
						for (b = 0; b < 10; b++) {
							cout << " " << fchoice_seat[a][b] << " ";
						}
						cout << endl;
					}
				}

				else if (fchoice_seat[fseat_x][fseat_y - 1] == 1)
					cout << "�̹� ����� �ڸ��Դϴ�." << endl;

				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << endl;
				cin >> choice;

				if (choice == 1)
					continue;
				else
					break;
			}

			while (choice == 2) {
				int fseatback_x;
				int fseatback_y;
				cout << "     ���� ����� �¼� ��Ȳ     " << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << fchoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				cout << "�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�?" << endl;
				cin >> fseatback_x;
				cin >> fseatback_y;
				if (fchoice_seat[fseatback_x][fseatback_y - 1] == 1) {
					cout << "���� ��� �Ǿ����ϴ�." << endl;
					fchoice_seat[fseatback_x][fseatback_y - 1] = 0;
					cout << "-------------------------------" << endl;
					cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
					cout << "-------------------------------" << endl;
					for (a = 1; a < 4; a++) {
						for (b = 0; b < 10; b++) {
							cout << " " << fchoice_seat[a][b] << " ";
						}
						cout << endl;
					}
				}
				else if (fchoice_seat[fseatback_x][fseatback_y - 1] == 0)
					cout << "������� ���� �ڸ��Դϴ�." << endl;

				cout << "���� �� �������ּ���." << endl;
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << endl;
				cin >> choice;

				if (choice == 2)
					continue;
				else
					break;
			}

			while (choice == 3) {
				cout << "[������!] �¼� ���� ����" << endl;
				break;
			}
			break;
		}

		if (movie == 4) {
			cout << "************** SWING CINEMA ����� �¼� ��ü ��Ȳ **************" << endl;
			cout << "--------------- �ٵ� ----------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "-------------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << dchoice_seat[a][b] << " ";
				}
				cout << endl;
			}
			cout << "--------------- �����ε� ----------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "-----------------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << achoice_seat[a][b] << " ";
				}
				cout << endl;
			}
			cout << "--------------- ������! ----------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "----------------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << fchoice_seat[a][b] << " ";
				}
				cout << endl;
			}
			cout << "SWING CINEMA�� �̿����ּż� �����մϴ�" << endl;
			cout << "�ȳ���������" << endl;
			break;
		}
	}
}

	