#include<iostream>
#include"janken.h"
#include"randkai.h"
using namespace std;


int enemyHand()
{
	return randkai() % 3;
}

handResult jankenResult(hand plyer, hand enemy)
{
	if (plyer == enemy)
	{
		return draw;
	}
	else if (plyer==Rock&&enemy==Scissors||plyer==Scissors&&enemy==Paper||plyer==Paper&&enemy==Rock)
	{
		return win;
	}
	else if (plyer==Rock&&enemy==Paper||plyer==Scissors&&enemy==Rock||plyer==Paper&&enemy==Scissors)
	{
		return lose;
	}
	else
	{
		return error;
	}

}

void janken()
{
	int cin;
	cout << "グーなら0,チョキなら1,パーなら2を入力してください" << endl;
	cin >> cin;
	hand plyer;
	hand enemy;
	int karienemy = enemyHand();
	if (cin == 0)
	{
		plyer = Rock;
	}
	else if(cin==1)
	{
		plyer = Scissors;
	}
	else if (cin == 2)
	{
		plyer = Paper;
	}

	if (karienemy== 0)
	{
		enemy = Rock;
	}
	else if (karienemy== 1)
	{
		enemy = Scissors;
	}
	else if (karienemy == 2)
	{
		enemy = Paper;
	}

	switch (jankenResult(plyer, enemy))
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
