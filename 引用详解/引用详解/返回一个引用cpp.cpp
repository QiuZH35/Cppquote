
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
using namespace std;

//栈区，自动回收，释放，返回值为指针，不能指向栈区，返回引用不能引用栈区。
//指针，指针在栈区，指针指向内存存在其他区域


//int getdata()//函数返回有副本机制，返回变量
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
	int num = 10;//销毁了
	return num;
}
//void main()
//{
//	//int &rnum = getdata1();//引用原来的内存
//	int rnum = getdata1();//拷贝到新的内存
//	cout << "hello ";
//	cout << rnum << endl;
//
//	cin.get();
//}


int g_num = 20;
int &getdata2()
{//堆区不会释放内存
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
//	char *&rp = getcode();//指针，引用p
//	char *newp = rp;//保存rp存储代码区地址
//	cout << "hello " << endl;
//	cout <<newp<< endl;
//	cout << rp << endl;//乱码
//	cin.get();
//}