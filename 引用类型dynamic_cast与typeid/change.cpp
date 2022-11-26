
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//子类同名函数覆盖父类
//父类指针存储子类地址，有虚函数调用子类方法，否则调用父类方法


class base
{
public:
	virtual void show()
	{

		cout << "base class" << endl;
	}
};
class baseX: public base
{
public:
	void show()
	{
		cout << "baseX class" << endl;
	}
};

void main()
{

	base * p1 = new baseX;
	p1->show();
	cout << typeid(p1).name() << endl;
	cout << typeid(*p1).name() << endl;
	//typeid自动识别类型，依赖于虚函数
	//有虚函数，p为子类，无为父类

	baseX *px = dynamic_cast <base *>(p1);

	px->show();

	cin.get();
}

void main2()
{

	//识别为父类对象，转换失败，00000
	//识别为子类兑现，转换成功。
	base *p1 = new base;
	base *p2 = new baseX;
	//baseX *px = dynamic_cast<baseX *>(p1);
	//cout << (void *)px << endl;


	cin.get();
}
void main3()
{
	base *p1 = new baseX;
	//base b1 = dynamic_cast<baseX >(*p1);
	//dynamic_cast 只能转换指针或引用，不能转换对象

	cin.get();
}

void main4()
{
	base *p1 = new base;
	base *p2 = new baseX;
	baseX *p3 = new baseX;
	base *p4 = p3;//自动把子类指针转换为父类指针。

	base & rbase(*p2);
	rbase.show();

	//base &rx = dynamic_cast<baseX &>(rbase);
	//rx.show(); 
	cin.get();
}