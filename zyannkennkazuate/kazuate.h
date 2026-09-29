#pragma once
#include"randkai.h"

enum judge
{
	hit =0,
	nothit =1,

	biggErthanThat = 2,
	SmallErthanThat = 3
};

void kazuate(int rand);
int searchvalue();
judge doJudge(int a, int b);

