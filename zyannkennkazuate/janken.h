#pragma once
#include<cstdlib>
#include<ctime>
//gu0,tyoki1,pa2
enum  handresult
{
	win = 0,
	lose = 1,
	draw = 2,
	error =3
};
handresult jankenresult(int a, int b)
{
	if (a == b)
	{
		return draw;
	}
	else if (a == 0&& b== 2||a==1&&b==0||a==2&&b==1)
	{
		return lose;
	}
	else if (a == 0 && b == 1 || a == 1 && b == 2 || a == 2 && b == 0)
	{
		return win;
	}
	else
	{
		return error;
	}

}

int enemyhand()
{
	srand((unsigned int)time(nullptr));
	return rand() % 3;
}