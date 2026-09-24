#include<iostream>
#include"janken.h"
#include"kazuate.h"

using namespace std;

int main()
{
	for (int i = 0;i < 10; ++i)
	{
		cout << "Choose 1 to play Rock-Paper-Scissors, or 2 for the number-guessing game." << endl;
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