#include <iostream>

using namespace std;

void start_5585()
{
	int money;
	int changMoney;
	int count = 0;
	cin >> money;

	changMoney = 1000 - money;

	int coins[6] = { 500, 100, 50, 10, 5 ,1 };

	for (int i = 0; i < 6; i++)
	{
		while (changMoney > 0)
		{
			if (changMoney - coins[i] < 0) break;
			else
			{
				changMoney = changMoney -coins[i];
				count++;
			}
		}
	}
	cout << count;
	//system("pause");
}

