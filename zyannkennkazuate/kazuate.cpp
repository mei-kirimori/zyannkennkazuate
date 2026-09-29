#include<iostream>
#include"kazuate.h"
#include"randkai.h"
using namespace std;


bool hint;
void kazuate(int rand)
{
	bool dohit = false;
	int plyer;
	const int  enemy = rand%100;
	cout << "Would you like to take it on with hints?" << endl << "Enter 1 for yes or 0 for no" << endl;
	cin >> hint;
	if (hint)
	{
		cout << "Starting with hints enabled." << endl;
	}
	else
	{
		cout << "Start without hints." << endl;
	};
	for (;!dohit;)
	{
		cout << "Please enter a number between 0 and 100." << endl;
		cin >> plyer;
		if (!hint)
		{
			switch (doJudge(plyer, enemy))
			{
			case hit:
				cout << "hit" << endl;
				dohit = true;
				break;
			case nothit:
				cout << "nohit" << endl;
				break;
			}
			return;
		}
		else
		{
			switch (doJudge(plyer, enemy))
			{
			case hit:
				cout << "hit" << endl;
				dohit = true;
				break;
			case SmallErthanThat:
				cout << "It's a bit smaller than that you're off the mark." << endl;
				break;
			case biggErthanThat:
				cout << "It's a bit further out than that." << endl;
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

