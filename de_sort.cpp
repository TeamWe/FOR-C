#include <iostream>
#include <vector>


using namespace std;

class a
{
	public:
	a()
	{
		cout << "construct a" <<endl;
	}
	~a()
	{
		cout << "destruct a" <<endl;
	}
};
class b:public a
{
	public:
	b()
	{
		cout << "construct b" <<endl;
	}
	~b()
	{
		cout << "destruct b" <<endl;
	}
};
class c:public b
{
	public:
	c()
	{
		cout << "construct c" <<endl;
	}
	~c()
	{
		cout << "destruct c" <<endl;
	}
};


int main()
{
	a* w = new c();
	// c* w = new c();
	delete w;
	return 0;
}