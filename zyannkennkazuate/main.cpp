#include<iostream>
#include<cstdlib>
#include<ctime>
#include"janken.h"
#include"kazuate.h"

using namespace std;

int main()
{
	srand((unsigned int)time(nullptr));
	int RAND = rand();
	for (int i = 0;i < 10; ++i)
	{
		cout << "Choose 1 to play Rock-Paper-Scissors, or 2 for the number-guessing game." << endl;
		int mode;
		cin >> mode;
		if (mode == 1)
		{
			janken(RAND);
		}
		else
		{
			kazuate(RAND);
		}
		
	}
}
