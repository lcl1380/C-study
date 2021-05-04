#include <iostream>
using namespace std;
int main() {
	int movie, choice = 0;
	int a, b;
	int choice_seat[4][10] = { 0 };

	cout << "************** SWING CINEMA 오늘의 영화 **************" << endl;
	cout << "1. 다들" << endl;
	cout << "2. 앞으로도" << endl;
	cout << "3. 파이팅!" << endl;
	cout << "4. 영화 선택 종료" << endl;
	cout << "영화를 선택하세요. (1,2,3)";
	cin >> movie;

	if (movie == 1) {
		cout << "다음 중 선택해주세요." << endl;
		cout << "1. 좌석 예약" << endl;
		cout << "2. 예약 취소" << endl;
		cout << "3. 예약 종료" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "현재의 좌석은 다음과 같습니다." << endl;
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
		cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? (이전으로 돌아가려면 0 입력)" << endl;
		cin >> seat_x;
		cin >> seat_y;

		if (choice_seat[seat_x][seat_y - 1] == 0) {
			cout << "예약되었습니다." << endl;
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
			cout << "이미 예약된 자리입니다." << endl;

		else if (seat_x == 0) 
			break; //0입력하면 while전으로 돌아가는건 어케하지??
		

	}

	if (movie == 2) {
		int seatback_x;
		int seatback_y;
		cout << "     현재 예약된 좌석 현황     " << endl;
		cout << "-------------------------------" << endl;
		cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
		cout << "-------------------------------" << endl;
		for (a = 1; a < 4; a++) {
			for (b = 0; b < 10; b++) {
				cout << " " << choice_seat[a][b] << " ";
			}
			cout << endl;
		}
		cout << "몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까?" << endl;
		cin >> seatback_x;
		cin >> seatback_y;
		if (choice_seat[seatback_x][seatback_y - 1] == 1) {
			cout << "예약 취소 되었습니다." << endl;
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
	