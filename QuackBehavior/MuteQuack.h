#pragma
#include "QuackBehavior.h"
#include <iostream>

class MuteQuack : public QuackBehavior
{
public:
	MuteQuack(){}

	void quack() override;
};