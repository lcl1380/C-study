#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int *ptr = &a; //a의 주소 추출

	cout << "변수 a의 주소는 : " << &a << endl;
	cout << "a의 값은 : " << *ptr << endl; //ptr에 저장된 a값


}