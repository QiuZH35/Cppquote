
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
using namespace std;

//ջ�����Զ����գ��ͷţ�����ֵΪָ�룬����ָ��ջ�����������ò�������ջ����
//ָ�룬ָ����ջ����ָ��ָ���ڴ������������


//int getdata()//���������и������ƣ����ر���
//{
//	int num = 10;
//	return num;
//}
//void main()
//{
//	//printf("%d", getdata());
//	
//	cout << getdata() << endl;
//	cin.get();
//}
int & getdata1()
{
	int num = 10;//������
	return num;
}
//void main()
//{
//	//int &rnum = getdata1();//����ԭ�����ڴ�
//	int rnum = getdata1();//�������µ��ڴ�
//	cout << "hello ";
//	cout << rnum << endl;
//
//	cin.get();
//}


int g_num = 20;
int &getdata2()
{//���������ͷ��ڴ�
	//int *p(new int(5));
	//return *p;//*p == int num
	return g_num;
}

char * & getcode()
{
	char*p = "wangfang";
	return p;
}
//void main()
//{
//	/*int & runm = getdata2();
//	cout << "hello  " << endl;
//	cout << runm << endl;*/
//
//	char *&rp = getcode();//ָ�룬����p
//	char *newp = rp;//����rp�洢��������ַ
//	cout << "hello " << endl;
//	cout <<newp<< endl;
//	cout << rp << endl;//����
//	cin.get();
//}