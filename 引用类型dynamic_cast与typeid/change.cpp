
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//����ͬ���������Ǹ���
//����ָ��洢�����ַ�����麯���������෽����������ø��෽��


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
	//typeid�Զ�ʶ�����ͣ��������麯��
	//���麯����pΪ���࣬��Ϊ����

	baseX *px = dynamic_cast <base *>(p1);

	px->show();

	cin.get();
}

void main2()
{

	//ʶ��Ϊ�������ת��ʧ�ܣ�00000
	//ʶ��Ϊ������֣�ת���ɹ���
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
	//dynamic_cast ֻ��ת��ָ������ã�����ת������

	cin.get();
}

void main4()
{
	base *p1 = new base;
	base *p2 = new baseX;
	baseX *p3 = new baseX;
	base *p4 = p3;//�Զ�������ָ��ת��Ϊ����ָ�롣

	base & rbase(*p2);
	rbase.show();

	//base &rx = dynamic_cast<baseX &>(rbase);
	//rx.show(); 
	cin.get();
}