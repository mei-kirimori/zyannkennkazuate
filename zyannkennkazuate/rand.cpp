#pragma once
#include<cstdlib>
#include<ctime>
#include"randkai.h"

int randkai()
{
	srand((unsigned int)time(nullptr));
	return rand();
}