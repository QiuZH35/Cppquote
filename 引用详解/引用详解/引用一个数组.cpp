
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
using namespace std;

//void main1()
//{
//	int a[5]{ 1,2,3,4,5 };//һά����
//	int *pa[5]{ a,a + 1,a + 2,a + 3,a + 4 };//ָ������
//	int b[2][3]{ 1,2,3,4,5,6 };//��ά����
//	//��ά���飬ÿ��Ԫ����һ��ָ��
//	int *pb[2][3]{ &b[0][0],&b[0][0] + 1 ,&b[0][0] + 2,&b[0][0] + 3,&b[0][0] + 4,&b[0][0] + 5 };
//
//
//	int *p1(new int[5]{ 1,2,3,4,5 });//����һά����
//	int(*p2)[3] = new int[2][3]{ {1,2,3},{4,5,6} };//���϶�ά����
//
//
//	cin.get();
//}

//void main2()
//{
//	int a[5]{ 1,2,3,4,5 };
//	int *pa[5]{ a,a + 1,a + 2,a + 3,a + 4 };//ָ������
//	int(&ra)[5](a);//����һ������
//	int * (&rpa)[5](pa);//����һ��ָ������
//	for (auto &i : ra)//����ԭ������
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
//	//int *p1(new int[5]{ 1,2,3,4,5 });//����һά����
//	//int **pp = new int*[5]{ p1,p1 + 1,p1 + 2,p1 + 3,p1 + 4 };//���ϵ�ָ������
//	//int *&rp(p1);
//	//int **&rpp(pp);
//
//	int *p1(new int[5]{ 1,2,3,4,5 });//����һά����
//	//int *(*pp)(nullptr);vs2013��ʼ����Ҫ��һ��ָ��
//	int *(*pp) (new int*[5]{ p1,p1 + 1,p1 + 2,p1 + 3,p1 + 4 });//���ϵ�ָ������
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
//	int b[2][3]{ 1,2,3,4,5,6 };//��ά����,��ָ��
//	int *pb[2][3]{ &b[0][0],&b[0][0] + 1 ,&b[0][0] + 2,&b[0][0] + 3,&b[0][0] + 4,&b[0][0] + 5 };//ָ��һ��ָ�����ָ��
//
//	int(&rb)[2][3](b);//���ö�ά����
//	int *(&rpb)[2][3](pb);//���ö�άָ������
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
//	//ָ�������ָ�룬{}����
//	int(*p2)[3]  { (new int[2][3]{ {1,2,3},{4,5,6} }) };//���϶�ά����
//	int(*&rp)[3](p2);//����һ����ָ��
//
//
//	int *(*pp) [4]  { new int*[3][4] };//�ڶ��Ͽ��ٶ�άָ��
//	int *(*&rpp)[4](pp);//���ö�ά��ָ������
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
//	//���������ǷǷ��ģ�ֻ�ܵ�������
//	cin.get();
//}




////const ������
//void main()
//{
//	int num = 100;
//	//int const&rnum(num);//�ñ������ã�ʹ��const �޶�Ȩ�� ��ֻ�ܶ�����д
//	//int&const  rnum(num);//ʹ���˼�ʱ���󣬻���������ϵ��޶�����
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
//		cout << i << endl;//ֻ��
//	}
//	cin.get();
//
//}

//void main()
//{
//	const int *p(new int(5));//ָ�룬ָ����
//
//	const int *&rp(p);//�޷��޸ģ�����һ��ָ������ָ��
//	//*rp = 3;
//	cout << *p << endl;
//	system("pause");
//}

//void main()
//{
//	int *const p(new int(4));
//	*p = 1;
//	int(*const (&rp))(p);//����ָ������ָ��
//
//	const int *const p(new int(4));
//	const int(*const (&rp))(p);
//	system("pause");
//}


//void show(const int &rint)//��ȷֻ����д
//{
//
//}
//void main()
//{
//	//int *p(new int(4));
//	//int *(&rp)(p);
//
//	int *p(new int(4));
//	const int *(&rp)((const int *&)p);//ǿ��ת��Ϊ��������
//	cout << *rp << endl;
//	system("pause");
//}




//���ú���ָ��
//#include <cstdlib>
////����ָ����Ϊ���������Ըı亯��ָ��
////����ָ����Ϊ����ֵ��ʵ�ֵ���getitp(p)("hello world");
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
//void change(int(* & p)(const char *cmd))//������Ϊ����
//{
//	p = showcmd;
//}
//
////����һ������ָ��
//int(* & getp()  )(const char *cmd)
//{
//	//int(*( p))(const char *cmd)(showcmd);
//	//int(*(p))(const char *cmd)=showcmd;//ջ��
//
//	//ǿ���ͣ���Ҫע������ת��
//	int(*&p)(const char *cmd)= (int(* & )(const char *cmd))showcmd;
//	int(*&p)(const char *cmd) ( (int(*&)(const char *cmd))showcmd);
//
//	return p;
//
//}
//
////������һ�����ã�����ֵҲ��һ������
//int(* & getitp(  int(*& p)(const char *cmd))  )(const char *cmd)
//{//����ֵҲ�и������ƣ�ʹ��&����ԭ��
//	p = showcmd;
//	return p;
//}
//void main()
//{
//	int(*p)(const char*cmd)(gocmd);//���庯��ָ�벢��ʼ��
//	p("calc");
//	//change(p);
//	//p = getp();
//	//p=getitp(p);
//	//p("echo hello");
//	getitp(p)("hello world");//����p ������һ��ָ�����ã���Ƕ��һ�����
//
//	cin.get();
//}



