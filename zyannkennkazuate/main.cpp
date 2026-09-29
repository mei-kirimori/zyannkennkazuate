#include<iostream>
#include<cstdlib>
#include<ctime>
#include"janken.h"
#include"kazuate.h"

using namespace std;

int main()
{
	int playCount;
	srand((unsigned int)time(nullptr));
	int RAND = rand();
	cout << "Please enter the number of times you want to play." << endl;
	cin >> playCount;
	for (int i = 0;i < playCount; ++i)
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
	cout << "The game is over. Thank you for playing." << endl;
}
