#include <cstdlib>
#include <iostream>
#include "coffee.h"

using namespace std;

void main()
{
	int cuppsNumber;

	cout << "How many cupps of coffee do you want: ";
	cin >> cuppsNumber;

	Coffee coffeeMachine(cuppsNumber);
	coffeeMachine.makeCoffee();
	coffeeMachine.~Coffee();

	system("pause");
}