#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay() {}

	void fly() override;
};