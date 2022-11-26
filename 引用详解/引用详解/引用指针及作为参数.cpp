
#define _CRT_SECURE_NO_WARNINGS 
//左值引用与右值引用
//左值引用内存的值 ，右值引用寄存器的值
#include<iostream>
using namespace std;

//void main()
//{//左值
//	int num (10);
//	int &runm(num);//引用相当有变量的别名
//	runm = 1;//通过变量名改变变量
//	cout << num << endl;
//	cout << runm << endl;
//
//	cout << &num << endl;
//	cout << &runm << endl;//引用值的地址与引用变量相同
//	
//	system("pause");
//}

//void main()
//{
//	int num = 1;
//	int data;
//	cout <<(void*)&data << endl; 
//	data = num + 1;
//
//	data = num + 2;
//
//	data = num + 3;
//
//	system("pause");
//}
//void main()
//{
	/*int num ( 10);
	int &&rnum(num + 1);*///右值引用，快速备份。编译器自动回收。

	//int data = num + 4;
	//int&rdata(data);//左值引用需要两个步骤


	/*int arr[5]{ 1,2,3,4,5 };
	int *p(arr);
	cout << *p << endl;*/

	//int arr   int&rp;  &放在类型和变量名之间
	//int* arr   int* & rp;
	//int *&rp(p);//左值引用，改变指针
	//rp += 1;
	//cout << *rp << endl;

	//int* &&rrp(p + 2);
	//cout << *rrp << endl;

//	system("pause");
//}

//引用的经典用法一
//void showint(int && runm)
//{
//	cout << runm << endl;
//}
//void main()
//{
//	int  a[5]{ 1,2,3,4,5 };
//	showint(a[2] + 3);//节约内存
//	showint(move(a[4]));//move 位移语义，左值改变为右值
//	system("pause");
//}



//引用指针
//#include <iostream>
//using namespace std;
//改变指针 ，需要使用二级指针

//void main1()
//{
//	int a(4);//初始化为4
//	int *p(new int(5));
//	cout << a << endl;
//	cout << *p << endl;
//
//	int &ra(a);//引用变量
//	int *&rp(p);//引用指针
//	ra = 3;
//	*rp = 12;
//	cout << a << endl;
//	cout << *p << endl;
//
//	cin.get();
//}
//void main2()
//{
//	int a(4);//初始化为4
//	int *p(new int(5));
//	cout << a << endl;
//	cout << *p << endl;
//
//	int &&rra(move(a));//转为右值,有内存实体就直接使用，内有就开辟内存
//	rra = 1;
//	int *&&rrp(move(p));
//	cout << rra << endl;
//	cout << a << endl;
//
//
//	//int &  引用整数，本质是指针
//	//int &&  引用整数，本质是指针，处理左值使用move 转换一下
//	//int 整数类型
//
//	cin.get();
//}

//int num1 = 10;
//int num2 = 20;
//void change(int *&rp)//C++ 能用引用就别用指针。
//{
//	rp = &num2;
//}
//void main3()
//{
//	int *p = &num1;
//	change(p);
//	cout << *p << endl;//20
//	cin.get();
//}

//void main4()
//{
//	int *p (nullptr);
//	int **p(&p);
//	//int **pp=&p;//vs2013    int (**&pp)(&p)
//	int **&rpp(pp);
//	//int(**(&rpp))(pp);//vs2013
//
//	int *pf(new int(5));
//	//int (*(&rpf))(pf);//vs2013
//
//	//vs 2013
//	//int(**  (&rpp)  )(pp);
//	cin.get();
//}

//void main()
//{
//	int ***ppp(nullptr);
//	int ***&rppp(ppp);
//
//
//	//int (***ppp)(nullptr);//vs2013的c++11的bug
//	//int (***(&rppp))(ppp);
//	cin.get();
//}




//int data1 = 10;
//int data2 = 20;
//int *p = &data1;
//
//void changeint(int ** &rpp)//引用
//{
//	*rpp = &data2;
//}
//void main()
//{
//	int **pp = &p;//二级指针
//	cout << **pp << endl;
//	changeint(pp);
//	cout << **pp << endl;
//	cin.get();
//}





//引用与指针

#include <iostream>
using namespace std;
//struct Myint
//{
//	double&rp;
//};//引用的本质是指针
//

//副本机制
//int *getp()
//{
//	int a = 5;
//		return &a;//返回局部变量或临时变量的地址
//}

//int & getint()
//{
//	int a = 5;
//	return a;//返回局部变量或临时变量的地址
//}

//本质是地址，操作引用等于操作原本
//int & getint(int &rint)//参数，返回都是地址
//{
//	rint = 1;
//	return rint;
//}
//void main()
//{
//	int a = 10;
//	int *p = new int(5);
//	int & ra(a);//引用，栈上，四个字节
//	//int & *pr;//error,不允许使用指向引用的指针
//	
//	
//	
//	
//	//getint(a);
//	//getint(*p);
//	  
//	cin.get();
//}





//引用函数指针数组，与二级函数指针

//函数指针数组，二级指针数组，下标循环，指针循环
//int add(int a, int b)
//{
//	return a + b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int divv(int a, int b)
//{
//	return a / b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//void main()
//{
	//int(*p[4])(int a, int b) {add,sub,mul,divv};

	//二级函数指针开辟函数指针数组
	//int(**pp)(int a, int b) { new(int(*[4])(int a, int b)){ add,sub,mul,divv } };

	//int(*  (&rp)[4]  )(int a, int b)  (p);//引用函数指针数组，并初始化
	//int(**(&rpp))(int, int)(pp);//引用二级函数数组

	//for (int i=0;i<4;i++)
	//{
	//	//cout << rp[i](100, 10) << endl;
	//	cout << rpp[i](100, 10) << endl;
	//}

	//for (int(**ppx)(int, int) =rpp; ppx < pp + 4; ppx++)//指针循环
	//{
	//	cout << (*ppx)(100, 10) <<endl;
	//}
	//	
//	cin.get();
//}




//引用结构体数组
//struct info
//{
//	int id;
//	int num;
//
//	//没有返回值，名称与类型名一致
//	info(int nid, int nnum) :id(nid),num(nnum)//构造初始化函数
//	{
//
//	}
//
//};
//
//void main1()
//{
//	//结构体数组在堆上开辟需要构造函数
//	info *p{    new info[5]  {   {1,1},{1,2},{1,3},{1,4},{1,5} }   };
//	info*(&rp)(p);//引用结构体数组
//	for (int i = 0; i < 5; i++)
//	{
//		cout << rp[i].id << " " << rp[i].num << endl;
//	}
//
//}
//void main()
//{
//	info infos[5]{   {1,1},{1,2},{1,3},{1,4},{1,5}  };
//	info (&infosp)[5](infos);//引用结构体数组
//	for (auto i : infosp)
//	{
//		cout << i.id << "  " << i.num << endl;
//	}
//	cin.get();
//}
