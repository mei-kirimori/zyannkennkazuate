#include<iostream>
#include"janken.h"
#include"kazuate.h"

using namespace std;

int main()
{
	for (int i = 0;i < 10; ++i)
	{
		cout << "じゃんけんで遊ぶなら１を数当てゲームなら２を" << endl;
		int mode;
		cin >> mode;
		if (mode == 1)
		{
			janken();
		}
		else
		{
			hitJudge();
		}
		
	}
}