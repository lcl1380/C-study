#include<iostream>
using namespace std; //std ��¼��~ �ϴ°� �Ƚᵵ �ǰ� ���ִ°�
int main()
{
	int res;
	int seat[4][10] = { 0 }; //0���� �ʱ�ȭ


	cout << "�¼��� �����Ͻðڽ��ϱ�? (1�Ǵ�0) "; //cout�� printf...����������
	cin >> res; //cin�� scanf

	if (res == 1) //res�� 1�̸� �Ʒ� ���
	{
		cout << "������ �¼��� ������ �����ϴ�. " << endl; //endl�� �ٹٲ�
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

	else if (res == 0) //res�� 0�̸� �Ʒ� ���
		cout << "�¼� ���� ����" << endl;

	else
		cout << "���� 1�Ǵ� 0�� �Է��ϼ���. " << endl;

	while (res == 1) //res�� 1�϶� �۵� + �̼��� ���ý� �ٽ� �����ϵ��� �ݺ�
	{
		int a, b;
		cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
		cin >> a;
		cin >> b;

		if (seat[a][b - 1] == 0) //�Է��� ���� seat a,b�� ����, b���� -1��ŭ ���� �ؾߵ�....!!! �Ʒ��� �Ȱ���
		{
			cout << "����Ǿ����ϴ�." << endl;
			seat[a][b - 1] = 1;  //�Է¹����ڸ��� 1�� ����
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

		else if (seat[a][b - 1] == 1) //1�� �� �ڸ��� �����ϸ� �̼���
			cout << "�̹� ����� �ڸ� �Դϴ�." << endl;
	}



	return 0;
}