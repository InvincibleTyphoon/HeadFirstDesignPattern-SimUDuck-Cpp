#pragma once
#include "Duck.h"

using namespace std;

void Duck::performFly()
{
	flyBehaivor->fly();
}

void Duck::performQuack()
{
	quackBehavior->quack();
}

void Duck::swim()
{
	cout << "Every Ducks float on water. Even the fake ducks can" << endl;
}

void Duck::setFlyBehavior(FlyBehavior* const fb )
{
	flyBehaivor = fb;
}

void Duck::setQuackBehavior(QuackBehavior* const qb)
{
	quackBehavior = qb;
}