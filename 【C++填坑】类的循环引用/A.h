#ifndef A_H
#define A_H
class B;
class A
{
private:
	B* b;
public:
	B* getB();
	A();
	~A();
	void doSomething();
};
#endif // A_H
