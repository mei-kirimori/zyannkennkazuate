#include<iostream>
#include"janken.h"
using namespace std;




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

void janken(int rand)
{
	int pcin;
	cout << "Please enter 0 for Rock, 1 for Scissors, or 2 for Paper." << endl;
	cin >> pcin;
	hand plyer = Rock;
	hand enemy = Rock;
	int karienemy = rand % 3;
	if (pcin == 0)
	{
		plyer = Rock;
	}
	else if(pcin==1)
	{
		plyer = Scissors;
	}
	else if (pcin == 2)
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
		cout << "The input is invalid." << endl;
		break;
	default:
		break;
	}
};
