#pragma once
#include "Duck.h"
#include "../FlyBeHavior/FlyNoWay.h"
#include "../QuackBehavior/Quack.h"
#include <iostream>

class ModelDuck :public Duck
{
public:
	ModelDuck();

	void display();
};

