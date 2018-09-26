#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyRocketPowered : public FlyBehavior
{
public:
	FlyRocketPowered() {}

	void fly() override;
};

