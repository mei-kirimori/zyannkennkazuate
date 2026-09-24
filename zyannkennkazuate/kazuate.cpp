#include<iostream>
#include"kazuate.h"
#include"randkai.h"
using namespace std;

int searchvalue()
{
	return randkai() % 100;
}
bool hint;
void hitJudge()
{
	bool dohit = false;
	int plyer;
	const int  enemy = searchvalue();
	cout << "ヒントありで挑みますか？" << endl << "ありなら1をなしなら0を入力してください" << endl;
	cin >> hint;
	if (hint)
	{
		cout << "ヒントありで開始します" << endl;
	}
	else
	{
		cout << "ヒントなしで開始します" << endl;
	};
	for (;!dohit;)
	{
		cout << "０から１００の数字を入力してください" << endl;
		cin >> plyer;
		if (!hint)
		{
			switch (doJudge(plyer, enemy))
			{
			case hit:
				cout << "当たり" << endl;
				dohit = true;
				break;
			case nothit:
				cout << "外れ" << endl;
				break;
			}
			return;
		}
		else
		{
			switch (doJudge(plyer, enemy))
			{
			case hit:
				cout << "当たり" << endl;
				dohit = true;
				break;
			case SmallErthanThat:
				cout << "外れもう少し小さいよ" << endl;
				break;
			case biggErthanThat:
				cout << "外れもう少し大きいよ" << endl;
				break;

			}
		}
	}
}

judge doJudge(int a,int b)
{
	if (a == b)
	{
		return hit;
	}
	else if(hint&&!(a==b))
	{
		if (a > b)
		{
			return SmallErthanThat;
				//プレイヤーのが大きい
		}
		else
		{
			return biggErthanThat;
		}
	}
	else
	{
		return nothit;
	}
}

