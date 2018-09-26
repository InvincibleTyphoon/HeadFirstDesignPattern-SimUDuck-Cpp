#pragma once
#include "MallardDuck.h"

using namespace std;

MallardDuck::MallardDuck()
{
	quackBehavior = new Quack();
	flyBehaivor = new FlyWithWings();
}

void MallardDuck::display()
{
	cout << "I am Mallard duck" << endl;
}