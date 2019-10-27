#include <iostream>
using namespace std;


class Test
{
public:
	int m_a = 1;
	virtual void func()
	{
		cout << "Test!" << endl;
	}
	virtual void func1()
	{
		cout << "Test1!" << endl;
	}
};


int main2()
{
	Test t;
	cout << sizeof(t) << endl;


	return 0;
}