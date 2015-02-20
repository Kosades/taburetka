#include <cstdlib>
#include <iostream>
#include "coffee.h"

Coffee::Coffee(int howManyCupps)
{
	cuppsNumber = howManyCupps;
}

Coffee::~Coffee()
{

}

void Coffee::makeCoffee()
{
	std::cout << ">> makeCoffee();" << std::endl;
}