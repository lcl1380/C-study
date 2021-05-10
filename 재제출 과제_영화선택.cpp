#include <iostream>
using namespace std;

int main() {
	int movie, choice = 0;
	int a, b;
	int dchoice_seat[4][10] = { 0 }; //'다들'의 자리
	int achoice_seat[4][10] = { 0 };//'앞으로도'의 자리
	int fchoice_seat[4][10] = { 0 };//'파이팅!'의 자리
	
	while (1) {
		cout << "************** SWING CINEMA 오늘의 영화 **************" << endl;
		cout << "1. 다들" << endl;
		cout << "2. 앞으로도" << endl;
		cout << "3. 파이팅!" << endl;
		cout << "4. 영화 선택 종료" << endl;
		cout << "영화를 선택하세요. (1,2,3)";
		cin >> movie;

		while (movie == 1) {//'다들'의 자리        
			cout << "다음 중 선택해주세요." << endl;
			cout << "1. 좌석 예약" << endl;
			cout << "2. 예약 취소" << endl;
			cout << "3. 예약 종료" << endl;
			cin >> choice;
			while (choice == 1) {
				cout << "현재의 좌석은 다음과 같습니다." << endl;
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
				cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?" << endl;
				cin >> dseat_x;
				cin >> dseat_y;

				if (dchoice_seat[dseat_x][dseat_y - 1] == 0) {
					cout << "예약되었습니다." << endl;
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
					cout << "이미 예약된 자리입니다." << endl;
				
				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << endl;
				cin >> choice;

				if (choice == 1)
					continue;
				else
					break;
			}

			while (choice == 2) {
				int dseatback_x;
				int dseatback_y;
				cout << "     현재 예약된 좌석 현황     " << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << dchoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				cout << "몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까?" << endl;
				cin >> dseatback_x;
				cin >> dseatback_y;
				if (dchoice_seat[dseatback_x][dseatback_y - 1] == 1) {
					cout << "예약 취소 되었습니다." << endl;
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
					cout << "예약되지 않은 자리입니다." << endl;

				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << endl;
				cin >> choice;

				if (choice == 2)
					continue;
				else
					break;
			}

			while (choice == 3) {
				cout << "[다들] 좌석 예약 종료" << endl;
				break;
			}
			break;
		}

		while (movie == 2) {//'앞으로도'의 자리        
			cout << "다음 중 선택해주세요." << endl;
			cout << "1. 좌석 예약" << endl;
			cout << "2. 예약 취소" << endl;
			cout << "3. 예약 종료" << endl;
			cin >> choice;
			while (choice == 1) {
				cout << "현재의 좌석은 다음과 같습니다." << endl;
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
				cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?" << endl;
				cin >> aseat_x;
				cin >> aseat_y;

				if (achoice_seat[aseat_x][aseat_y - 1] == 0) {
					cout << "예약되었습니다." << endl;
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
					cout << "이미 예약된 자리입니다." << endl;

				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << endl;
				cin >> choice;

				if (choice == 1)
					continue;
				else
					break;
			}

			while (choice == 2) {
				int aseatback_x;
				int aseatback_y;
				cout << "     현재 예약된 좌석 현황     " << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << achoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				cout << "몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까?" << endl;
				cin >> aseatback_x;
				cin >> aseatback_y;
				if (achoice_seat[aseatback_x][aseatback_y - 1] == 1) {
					cout << "예약 취소 되었습니다." << endl;
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
					cout << "예약되지 않은 자리입니다." << endl;

				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << endl;
				cin >> choice;

				if (choice == 2)
					continue;
				else
					break;
			}

			while (choice == 3) {
				cout << "[앞으로도] 좌석 예약 종료" << endl;
				break;
			}
			break;
		}

		while (movie == 3) {//'파이팅'의 자리        
			cout << "다음 중 선택해주세요." << endl;
			cout << "1. 좌석 예약" << endl;
			cout << "2. 예약 취소" << endl;
			cout << "3. 예약 종료" << endl;
			cin >> choice;
			while (choice == 1) {
				cout << "현재의 좌석은 다음과 같습니다." << endl;
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
				cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?" << endl;
				cin >> fseat_x;
				cin >> fseat_y;

				if (fchoice_seat[fseat_x][fseat_y - 1] == 0) {
					cout << "예약되었습니다." << endl;
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
					cout << "이미 예약된 자리입니다." << endl;

				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << endl;
				cin >> choice;

				if (choice == 1)
					continue;
				else
					break;
			}

			while (choice == 2) {
				int fseatback_x;
				int fseatback_y;
				cout << "     현재 예약된 좌석 현황     " << endl;
				cout << "-------------------------------" << endl;
				cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
				cout << "-------------------------------" << endl;
				for (a = 1; a < 4; a++) {
					for (b = 0; b < 10; b++) {
						cout << " " << fchoice_seat[a][b] << " ";
					}
					cout << endl;
				}
				cout << "몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까?" << endl;
				cin >> fseatback_x;
				cin >> fseatback_y;
				if (fchoice_seat[fseatback_x][fseatback_y - 1] == 1) {
					cout << "예약 취소 되었습니다." << endl;
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
					cout << "예약되지 않은 자리입니다." << endl;

				cout << "다음 중 선택해주세요." << endl;
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << endl;
				cin >> choice;

				if (choice == 2)
					continue;
				else
					break;
			}

			while (choice == 3) {
				cout << "[파이팅!] 좌석 예약 종료" << endl;
				break;
			}
			break;
		}

		if (movie == 4) {
			cout << "************** SWING CINEMA 예약된 좌석 전체 현황 **************" << endl;
			cout << "--------------- 다들 ----------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "-------------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << dchoice_seat[a][b] << " ";
				}
				cout << endl;
			}
			cout << "--------------- 앞으로도 ----------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "-----------------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << achoice_seat[a][b] << " ";
				}
				cout << endl;
			}
			cout << "--------------- 파이팅! ----------------" << endl;
			cout << " 1  2  3  4  5  6  7  8  9  10 " << endl;
			cout << "----------------------------------------" << endl;
			for (a = 1; a < 4; a++) {
				for (b = 0; b < 10; b++) {
					cout << " " << fchoice_seat[a][b] << " ";
				}
				cout << endl;
			}
			cout << "SWING CINEMA를 이용해주셔서 감사합니다" << endl;
			cout << "안녕히가세요" << endl;
			break;
		}
	}
}
	
