#include<iostream>
#include"janken.h"
using namespace std;

void janken()
{
	int plyer;
	cout << "グーなら0,チョキなら1,パーなら2を入力してください" << endl;
	cin >> plyer;
	switch (jankenresult(plyer, enemyhand()))
	{
	case win:
		cout << "win" << endl;
		break;
	case lose:
		cout << "lose" << endl;
		break;
	case draw :
		cout << "draw" << endl;
		break;
	case error:
		cout << "入力が正しくありません" << endl;
		break;
	default:
		break;
	}
}

int main()
{
	for (int i = 0;i < 10; ++i)
	{
		janken();
	}
}