

class A
{
public:
	 int func() {} //1
};


class B: public A
{
public:
	 int func() {} //2
};

void main()
{
	A a;
	B b;
	b.func(); //b
	A* bPtr = &b;
	A* aPtr = &a;
	aPtr->func(); //1
	bPtr->func();  //2


}