
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
using namespace std;

//void main1()
//{
//	int a[5]{ 1,2,3,4,5 };//一维数组
//	int *pa[5]{ a,a + 1,a + 2,a + 3,a + 4 };//指针数组
//	int b[2][3]{ 1,2,3,4,5,6 };//二维数组
//	//二维数组，每个元素是一个指针
//	int *pb[2][3]{ &b[0][0],&b[0][0] + 1 ,&b[0][0] + 2,&b[0][0] + 3,&b[0][0] + 4,&b[0][0] + 5 };
//
//
//	int *p1(new int[5]{ 1,2,3,4,5 });//堆上一维数组
//	int(*p2)[3] = new int[2][3]{ {1,2,3},{4,5,6} };//堆上二维数组
//
//
//	cin.get();
//}

//void main2()
//{
//	int a[5]{ 1,2,3,4,5 };
//	int *pa[5]{ a,a + 1,a + 2,a + 3,a + 4 };//指针数组
//	int(&ra)[5](a);//引用一个数组
//	int * (&rpa)[5](pa);//引用一个指针数组
//	for (auto &i : ra)//引用原生变量
//	{
//		cout << (i+=1) << endl;
//	}
//	for (auto i : rpa)
//	{
//		cout << *i << endl;
//	}
//	for (auto i : a)
//	{
//		cout << i << endl;
//	}
//	cin.get();
//}


//void main()
//{	//vs2015
//	//int *p1(new int[5]{ 1,2,3,4,5 });//堆区一维数组
//	//int **pp = new int*[5]{ p1,p1 + 1,p1 + 2,p1 + 3,p1 + 4 };//堆上的指针数组
//	//int *&rp(p1);
//	//int **&rpp(pp);
//
//	int *p1(new int[5]{ 1,2,3,4,5 });//堆区一维数组
//	//int *(*pp)(nullptr);vs2013初始化需要留一个指针
//	int *(*pp) (new int*[5]{ p1,p1 + 1,p1 + 2,p1 + 3,p1 + 4 });//堆上的指针数组
//	int (*(&rp))(p1);
//	int (**(&rpp))(pp);
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << rp[i] << endl;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << *rpp[i] << endl;
//	}
//
//	cin.get();
//}


//void main4()
//{
//	int b[2][3]{ 1,2,3,4,5,6 };//二维数组,行指针
//	int *pb[2][3]{ &b[0][0],&b[0][0] + 1 ,&b[0][0] + 2,&b[0][0] + 3,&b[0][0] + 4,&b[0][0] + 5 };//指向一个指针的行指针
//
//	int(&rb)[2][3](b);//引用二维数组
//	int *(&rpb)[2][3](pb);//引用二维指针数组
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << rb[i][j];
//		}
//		cout << "\n";
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << *rpb[i][j];
//		}
//		cout << "\n";
//	}
//	cin.get();
//}

//void main()
//{
//	//指向数组的指针，{}包含
//	int(*p2)[3]  { (new int[2][3]{ {1,2,3},{4,5,6} }) };//堆上二维数组
//	int(*&rp)[3](p2);//引用一个行指针
//
//
//	int *(*pp) [4]  { new int*[3][4] };//在堆上开辟二维指针
//	int *(*&rpp)[4](pp);//引用二维的指针数组
//
//
//
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << rp[i][j];
//		}
//		cout << endl;
//	}
//	cin.get();
//}



//void main()
//{
//	int a;
//	int b;
//	int c;
//	int &ra(a);
//	int&rb(b);
//	int &rc(c);
//
//	int & myarray[3]{ ra,rb,rc };
//	//数组引用是非法的，只能单个引用
//	cin.get();
//}




////const 与引用
//void main()
//{
//	int num = 100;
//	//int const&rnum(num);//让别人引用，使用const 限定权限 。只能读不能写
//	//int&const  rnum(num);//使用了记时错误，会忽略引用上的限定符。
//
//	//rnum = 1;
//	cout << rnum << endl;
//
//	cin.get();
//}

//void main()
//{
//	int a[5]{ 1,2,3,4,5 };
//	const int(&ra)[5](a);
//	for (auto &i : ra)
//	{
//		cout << i << endl;//只读
//	}
//	cin.get();
//
//}

//void main()
//{
//	const int *p(new int(5));//指针，指向常量
//
//	const int *&rp(p);//无法修改，引用一个指向常量的指针
//	//*rp = 3;
//	cout << *p << endl;
//	system("pause");
//}

//void main()
//{
//	int *const p(new int(4));
//	*p = 1;
//	int(*const (&rp))(p);//引用指向常量的指针
//
//	const int *const p(new int(4));
//	const int(*const (&rp))(p);
//	system("pause");
//}


//void show(const int &rint)//明确只读不写
//{
//
//}
//void main()
//{
//	//int *p(new int(4));
//	//int *(&rp)(p);
//
//	int *p(new int(4));
//	const int *(&rp)((const int *&)p);//强制转换为常量引用
//	cout << *rp << endl;
//	system("pause");
//}




//引用函数指针
//#include <cstdlib>
////函数指针作为参数，可以改变函数指针
////函数指针作为返回值，实现调用getitp(p)("hello world");
//
//int gocmd(const char*cmd)
//{
//	system(cmd);
//	return 1;
//}
//int showcmd(const char*cmd)
//{
//	cout << cmd << endl;
//	return 1;
//}
//
//void change(int(* & p)(const char *cmd))//引用作为参数
//{
//	p = showcmd;
//}
//
////返回一个函数指针
//int(* & getp()  )(const char *cmd)
//{
//	//int(*( p))(const char *cmd)(showcmd);
//	//int(*(p))(const char *cmd)=showcmd;//栈区
//
//	//强类型，需要注意类型转换
//	int(*&p)(const char *cmd)= (int(* & )(const char *cmd))showcmd;
//	int(*&p)(const char *cmd) ( (int(*&)(const char *cmd))showcmd);
//
//	return p;
//
//}
//
////参数是一个引用，返回值也是一个引用
//int(* & getitp(  int(*& p)(const char *cmd))  )(const char *cmd)
//{//返回值也有副本机制，使用&返回原本
//	p = showcmd;
//	return p;
//}
//void main()
//{
//	int(*p)(const char*cmd)(gocmd);//定义函数指针并初始化
//	p("calc");
//	//change(p);
//	//p = getp();
//	//p=getitp(p);
//	//p("echo hello");
//	getitp(p)("hello world");//调用p ，返回一个指针引用，再嵌入一条语句
//
//	cin.get();
//}



