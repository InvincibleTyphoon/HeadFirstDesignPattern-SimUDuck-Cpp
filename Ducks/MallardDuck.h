#pragma once
#include "Duck.h"
#include "../FlyBeHavior/FlyWithWings.h"
#include "../QuackBehavior/Quack.h"

class MallardDuck : public Duck
{
public:
	MallardDuck();

	void display() override;
};