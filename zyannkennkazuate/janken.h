#pragma once
#include<cstdlib>
#include<ctime>
#include"randkai.h"
//gu0,tyoki1,pa2
void janken();
enum  handResult
{
	win = 0,
	lose = 1,
	draw = 2,
	error =3
};
handResult jankenResult(int a, int b);

int enemyhand();