#pragma once
#include<cstdlib>
#include<ctime>
#include"randkai.h"
//gu0,tyoki1,pa2
void janken();
enum  handresult
{
	win = 0,
	lose = 1,
	draw = 2,
	error =3
};
handresult jankenresult(int a, int b);

int enemyhand();