#pragma once
#include <iostream>
#include "QuackBehavior.h"

class Squeak : public QuackBehavior
{
public:
	Squeak(){}

	void quack() override;
};
