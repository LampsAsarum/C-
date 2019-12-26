#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"
using namespace std;

int main(int argc, char* argv[])
{
	A* a = new A;
	a->doSomething();
	B* b = a->getB();
	b->doSomething2();
	return 0;
}