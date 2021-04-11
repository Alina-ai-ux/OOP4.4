//Source.cpp
#include <iostream>
#include "Currency.h"
#include "Euro.h"
#include "Dollar.h"
using namespace std;
int main()
{
	Dollar d(2);
	d.Display();
	cout << "Dollars in hryvnias = " << d.convertintohryvnia() << endl;
	Euro e;
	e.setEuros(4);
	e.Display();
	cout <<"Euros in hryvnias = " <<e.convertintohryvnia() << endl;
	return 0;
};