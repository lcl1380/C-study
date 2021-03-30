#include <iostream>
#include <string>
using namespace std;// std 생략

int main()
{
	cout << "당신의 이름은 무엇입니까? \n";
	string name;
	getline(cin, name);  //이름에 공백이 있으므로 공백을 포함 문자 쓸 수 있는 getline 사용
	cout << "반갑습니다." << name << "님" << endl;

	int apple, banana, orange; // 과일 가격 저장
	int apple_a, banana_b, orange_o; // 과일 갯수 저장
	int total; //총액

	cout << "apple의 가격은 얼마입니까?";
	cin >> apple;
	cout << "banana의 가격은 얼마입니까?";
	cin >> banana;
	cout << "orange의 가격은 얼마입니까?";
	cin >> orange;

	cout << "apple은 몇개 있습니까?";
	cin >> apple_a;
	cout << "banana은 몇개 있습니까?";
	cin >> banana_b;
	cout << "orange은 몇개 있습니까?";
	cin >> orange_o;

	total = (apple * apple_a) + (banana * banana_b) + (orange * orange_o) - 500; //총액에서 500원 할인
	cout << "총" << total << "원 입니다.\n";

}