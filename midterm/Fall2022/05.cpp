#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	int num1[SIZE], num2[SIZE];
	int flag;
	int N, M, i, j;

	cout << "Enter the number of elements for the array Num1: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "Enter an integer value for the array Num1: ";
		cin >> num1[i];
	}

	cout << "Enter the number of elements for the array Num2: ";
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cout << "Enter an integer value for the array Num2: ";
		cin >> num2[i];
	}

	for (i = 0; i < N; i++)
	{
		flag = 0;
		for (j = 0; j < M; j++)
		{
			if (num1[i] == num2[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			break;
	}
	if (i < N)
		cout << "False" << endl;
	else
		cout << "True" << endl;
}
