#include<iostream>
#include"janken.h"
#include"kazuate.h"

using namespace std;

int main()
{
	for (int i = 0;i < 10; ++i)
	{
		janken();
	}
	for(int i = 0;i < 10; ++i)
	{
		hitJudge();
	}
}