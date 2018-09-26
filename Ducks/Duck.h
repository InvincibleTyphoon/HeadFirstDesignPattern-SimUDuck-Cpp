#pragma once
#include <iostream>
#include "../FlyBeHavior/FlyBehavior.h"
#include "../QuackBehavior/QuackBehavior.h"

class Duck abstract
{
public:
	Duck(){	}

	virtual void display() = 0;

	void performFly();

	void performQuack();

	void swim();

	void setFlyBehavior(FlyBehavior* const fb);

	void setQuackBehavior(QuackBehavior* const qb);


protected:
	FlyBehavior * flyBehaivor;
	QuackBehavior * quackBehavior;
};