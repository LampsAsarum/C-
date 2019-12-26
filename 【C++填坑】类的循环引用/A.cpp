#include "A.h"
#include "B.h"
#include <iostream>
using namespace std;

A::A()
{
	b = new B;
	b->setA(this);
}

A::~A() {
	delete b;
}

B* A::getB()
{
	return b;
}

void A::doSomething()
{
	cout << "A :: OK" << endl;
}