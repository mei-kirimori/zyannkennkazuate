#include<iostream>
#include"janken.h"
#include"randkai.h"
using namespace std;


int enemyHand()
{
	return randkai() % 3;
}

handResult jankenResult(int a, int b)
{
	if (a == b)
	{
		return draw;
	}
	else if (a == 0 && b == 2 || a == 1 && b == 0 || a == 2 && b == 1)
	{
		return lose;
	}
	else if (a == 0 && b == 1 || a == 1 && b == 2 || a == 2 && b == 0)
	{
		return win;
	}
	else
	{
		return error;
	}

}

void janken()
{
	int plyer;
	cout << "グーなら0,チョキなら1,パーなら2を入力してください" << endl;
	cin >> plyer;
	switch (jankenResult(plyer, enemyHand()))
	{
	case win:
		cout << "win" << endl;
		break;
	case lose:
		cout << "lose" << endl;
		break;
	case draw:
		cout << "draw" << endl;
		break;
	case error:
		cout << "入力が正しくありません" << endl;
		break;
	default:
		break;
	}
};
