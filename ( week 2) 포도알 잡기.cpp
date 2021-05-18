#include<iostream>
using namespace std; //std 어쩌고~ 하는거 안써도 되게 해주는거
int main()
{
	int res;
	int seat[4][10] = { 0 }; //0으로 초기화


	cout << "좌석을 예약하시겠습니까? (1또는0) "; //cout은 printf...까먹지말기ㅜ
	cin >> res; //cin은 scanf

	if (res == 1) //res가 1이면 아래 출력
	{
		cout << "현재의 좌석은 다음과 같습니다. " << endl; //endl은 줄바꿈
		cout << "---------------------" << endl;
		cout << "1 2 3 4 5 6 7 8 9 10 " << endl;
		cout << "---------------------" << endl;

		for (int i = 1; i < 4; i++) {
			for (int j = 0; j < 10; j++) {
				cout << seat[i][j] << " ";
			}
			cout << endl;
		}
	}

	else if (res == 0) //res가 0이면 아래 출력
		cout << "좌석 예약 종료" << endl;

	else
		cout << "정수 1또는 0을 입력하세요. " << endl;

	while (res == 1) //res가 1일때 작동 + 이선좌 선택시 다시 선택하도록 반복
	{
		int a, b;
		cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
		cin >> a;
		cin >> b;

		if (seat[a][b - 1] == 0) //입력한 값을 seat a,b에 저장, b에서 -1만큼 빼기 해야됨....!!! 아래도 똑같이
		{
			cout << "예약되었습니다." << endl;
			seat[a][b - 1] = 1;  //입력받은자리를 1로 변경
			cout << "---------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10 " << endl;
			cout << "---------------------" << endl;
			for (int i = 1; i < 4; i++) {
				for (int j = 0; j < 10; j++) {
					cout << seat[i][j] << " ";
				}
				cout << endl;
			}

		}

		else if (seat[a][b - 1] == 1) //1로 된 자리를 예약하면 이선좌
			cout << "이미 예약된 자리 입니다." << endl;
	}



	return 0;
}
