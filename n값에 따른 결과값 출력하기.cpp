#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n; //입력한 n값 출력

	for (int a = 1; a <= n; a++) { // ' * ' 입력을 n번 반복
		if (n % 2 == 0) { //n이 짝수일때

			for (int i = 1; i <= n / 2; i++) {
				//6일경우 한줄에 3개씩 들어감, n일 경우 한줄에 n/2개씩들어감!
				cout << " * ";
			}

			cout << endl; //줄바꿈
		}
		else  //n이 홀수일때
		{
			for (int b = 1; b <= n / 2 + 1; b++)
				//5일 경우 윗줄에 3, 아랫줄에 2 들어감
				//n일 경우 윗줄에 n/2+1, 아랫줄에 n/2 들어감
			{
				cout << " * ";
			}
			cout << endl;
		}
		cout << " "; //두번째 줄에 띄어쓰기 추가
		for (int b = 1; b <= n / 2; b++) {
			//짝홀 상관없이 아랫줄에는 n/2 만큼 들어감
			cout << " * ";
		}
		cout << endl;
	}
	return 0;
}