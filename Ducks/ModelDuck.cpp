#include "ModelDuck.h"

using namespace std;

ModelDuck::ModelDuck()
{
	flyBehaivor = new FlyNoWay();
	quackBehavior = new Quack();
}

void ModelDuck::display()
{
	cout << "I am model duck" << endl;
}