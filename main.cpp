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
Э�䣺���������������д��˵��Э���������������ֵ��ͬ�����Ƿ���ֵҲ�Ǽ̳еĹ�ϵ
class A{}; class B : public A {};

class Person { public:    virtual A* f() { return new A; } };

class Student : public Person { public:    virtual B* f() { return new B; } };
*/

int main1()
{
	//Test t;
	//TestBase tb;
	//t.func();//����

	//Test t;
	//TestBase * ptb = &t;
	//ptb->func();//�������ָ�봫�������ָ�룬�Ϳ��Կ������صĶ���

	/*Test t;
	TestBase tb;
	t.func();��д���߸���*/

	//Test t;
	//TestBase * ptb = &t;
	//ptb->func();//����д֮������Ǹ������Ͳ����ˣ��ͺ�����һ��ʹ����д֮��ĺ���

	//��д����������������ȫ��ͬ���������ص���������ֻҪ��������ͬ������

	//�������������ʱ������������� ��д���麯����ʱ��t�Ͳ��ᱻ��������Ϊtû�б���д������virtual֮��
	//�����������������д�ˣ����ԾͿ���ͬʱ������������������
	//Test * t = new Test;
	//TestBase * tb = t;
	//delete tb;


	return 0;
}