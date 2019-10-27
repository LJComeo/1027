#include <iostream>
using namespace std;

/*
class TestBase
{
public:
	virtual ~TestBase()
	{
		cout << "TestBase" << endl;
	}
};

class Test : public TestBase
{
public:
	virtual ~Test()
	{
		cout << "Test" << endl;
	}
};
*/


/*
协变：对于这种特殊的重写来说，协变的两个函数返回值不同，但是返回值也是继承的关系
class A{}; class B : public A {};

class Person { public:    virtual A* f() { return new A; } };

class Student : public Person { public:    virtual B* f() { return new B; } };
*/

int main1()
{
	//Test t;
	//TestBase tb;
	//t.func();//隐藏

	//Test t;
	//TestBase * ptb = &t;
	//ptb->func();//派生类的指针传给基类的指针，就可以看到隐藏的东西

	/*Test t;
	TestBase tb;
	t.func();重写或者覆盖*/

	//Test t;
	//TestBase * ptb = &t;
	//ptb->func();//当重写之后父类的那个函数就不见了，就和子类一起使用重写之后的函数

	//重写的两个函数必须完全相同，但是隐藏的两个函数只要函数名相同就行了

	//下面这种情况的时候如果析构函数 不写成虚函数的时候t就不会被析构，因为t没有被重写，加上virtual之后
	//基类的析构函数被重写了，所以就可以同时调用这两个的析构了
	//Test * t = new Test;
	//TestBase * tb = t;
	//delete tb;


	return 0;
}