#include <iostream>
#include "B.h"
#include "A.h"
#include "C.h"
using namespace std;

B::B()
{
	c = new C;
	c->setB(this);
}

void B::setA(A* x) 
{ 
	a = x; 
}

void B::doSomething()
{
	cout << "B :: OK" << endl;
}
void B::doSomething2()
{
	a->doSomething();
}