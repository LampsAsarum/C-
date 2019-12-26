#ifndef B_H
#define B_H
class A;
class C;
class B
{
private:
	A* a;
	C* c;
public:
	B();
	void setA(A* x);
	void doSomething();
	void doSomething2();
};
#endif // B_H