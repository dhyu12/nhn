#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int employeeNum[99999]; // �����ȣ
	int score;	//	����
	int count;	// ����� �Է� ��
	int temp, st, en;	// ���ÿ� ����
	srand(time(NULL));

	cout << "����� count �Է� : ";
	cin >> count;

	for(int i = 0; i < 99999; i++)	//	�迭 �ʱ�ȭ
	{
		employeeNum[i] = i + 1;
	}

	for(int i=0; i < 100000; i++)	//	100000�� ����
	{
		st = rand() % 99998;	// 0 ~ 99999
		en = rand() % 99998;

		//swap
		temp = employeeNum[st];
		employeeNum[st] = employeeNum[en];
		employeeNum[en] = temp;
	}

	for(int i = 0; i < count; i++)	//	�����ȣ 0 ä���
	{
		score = rand() % 100;	// 0 ~ 99

		if(employeeNum[i] < 10)
		{
			cout << "NT0000" << employeeNum[i] << " " << score << endl;
		}
		else if(employeeNum[i] < 100)
		{
			cout << "NT000" << employeeNum[i] << " " << score << endl;
		}
		else if(employeeNum[i] < 1000)
		{
			cout << "NT00" << employeeNum[i] << " " << score << endl;
		}
		else if(employeeNum[i] < 10000)
		{
			cout << "NT0" << employeeNum[i] << " " << score << endl;
		}
		else
		{
			cout << "NT" << employeeNum[i] << " " << score << endl;
		}
	}

	system("pause");
	return 0;
}