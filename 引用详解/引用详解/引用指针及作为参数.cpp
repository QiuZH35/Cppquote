
#define _CRT_SECURE_NO_WARNINGS 
//��ֵ��������ֵ����
//��ֵ�����ڴ��ֵ ����ֵ���üĴ�����ֵ
#include<iostream>
using namespace std;

//void main()
//{//��ֵ
//	int num (10);
//	int &runm(num);//�����൱�б����ı���
//	runm = 1;//ͨ���������ı����
//	cout << num << endl;
//	cout << runm << endl;
//
//	cout << &num << endl;
//	cout << &runm << endl;//����ֵ�ĵ�ַ�����ñ�����ͬ
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
	int &&rnum(num + 1);*///��ֵ���ã����ٱ��ݡ��������Զ����ա�

	//int data = num + 4;
	//int&rdata(data);//��ֵ������Ҫ��������


	/*int arr[5]{ 1,2,3,4,5 };
	int *p(arr);
	cout << *p << endl;*/

	//int arr   int&rp;  &�������ͺͱ�����֮��
	//int* arr   int* & rp;
	//int *&rp(p);//��ֵ���ã��ı�ָ��
	//rp += 1;
	//cout << *rp << endl;

	//int* &&rrp(p + 2);
	//cout << *rrp << endl;

//	system("pause");
//}

//���õľ����÷�һ
//void showint(int && runm)
//{
//	cout << runm << endl;
//}
//void main()
//{
//	int  a[5]{ 1,2,3,4,5 };
//	showint(a[2] + 3);//��Լ�ڴ�
//	showint(move(a[4]));//move λ�����壬��ֵ�ı�Ϊ��ֵ
//	system("pause");
//}



//����ָ��
//#include <iostream>
//using namespace std;
//�ı�ָ�� ����Ҫʹ�ö���ָ��

//void main1()
//{
//	int a(4);//��ʼ��Ϊ4
//	int *p(new int(5));
//	cout << a << endl;
//	cout << *p << endl;
//
//	int &ra(a);//���ñ���
//	int *&rp(p);//����ָ��
//	ra = 3;
//	*rp = 12;
//	cout << a << endl;
//	cout << *p << endl;
//
//	cin.get();
//}
//void main2()
//{
//	int a(4);//��ʼ��Ϊ4
//	int *p(new int(5));
//	cout << a << endl;
//	cout << *p << endl;
//
//	int &&rra(move(a));//תΪ��ֵ,���ڴ�ʵ���ֱ��ʹ�ã����оͿ����ڴ�
//	rra = 1;
//	int *&&rrp(move(p));
//	cout << rra << endl;
//	cout << a << endl;
//
//
//	//int &  ����������������ָ��
//	//int &&  ����������������ָ�룬������ֵʹ��move ת��һ��
//	//int ��������
//
//	cin.get();
//}

//int num1 = 10;
//int num2 = 20;
//void change(int *&rp)//C++ �������þͱ���ָ�롣
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
//	//int (***ppp)(nullptr);//vs2013��c++11��bug
//	//int (***(&rppp))(ppp);
//	cin.get();
//}




//int data1 = 10;
//int data2 = 20;
//int *p = &data1;
//
//void changeint(int ** &rpp)//����
//{
//	*rpp = &data2;
//}
//void main()
//{
//	int **pp = &p;//����ָ��
//	cout << **pp << endl;
//	changeint(pp);
//	cout << **pp << endl;
//	cin.get();
//}





//������ָ��

#include <iostream>
using namespace std;
//struct Myint
//{
//	double&rp;
//};//���õı�����ָ��
//

//��������
//int *getp()
//{
//	int a = 5;
//		return &a;//���ؾֲ���������ʱ�����ĵ�ַ
//}

//int & getint()
//{
//	int a = 5;
//	return a;//���ؾֲ���������ʱ�����ĵ�ַ
//}

//�����ǵ�ַ���������õ��ڲ���ԭ��
//int & getint(int &rint)//���������ض��ǵ�ַ
//{
//	rint = 1;
//	return rint;
//}
//void main()
//{
//	int a = 10;
//	int *p = new int(5);
//	int & ra(a);//���ã�ջ�ϣ��ĸ��ֽ�
//	//int & *pr;//error,������ʹ��ָ�����õ�ָ��
//	
//	
//	
//	
//	//getint(a);
//	//getint(*p);
//	  
//	cin.get();
//}





//���ú���ָ�����飬���������ָ��

//����ָ�����飬����ָ�����飬�±�ѭ����ָ��ѭ��
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

	//��������ָ�뿪�ٺ���ָ������
	//int(**pp)(int a, int b) { new(int(*[4])(int a, int b)){ add,sub,mul,divv } };

	//int(*  (&rp)[4]  )(int a, int b)  (p);//���ú���ָ�����飬����ʼ��
	//int(**(&rpp))(int, int)(pp);//���ö�����������

	//for (int i=0;i<4;i++)
	//{
	//	//cout << rp[i](100, 10) << endl;
	//	cout << rpp[i](100, 10) << endl;
	//}

	//for (int(**ppx)(int, int) =rpp; ppx < pp + 4; ppx++)//ָ��ѭ��
	//{
	//	cout << (*ppx)(100, 10) <<endl;
	//}
	//	
//	cin.get();
//}




//���ýṹ������
//struct info
//{
//	int id;
//	int num;
//
//	//û�з���ֵ��������������һ��
//	info(int nid, int nnum) :id(nid),num(nnum)//�����ʼ������
//	{
//
//	}
//
//};
//
//void main1()
//{
//	//�ṹ�������ڶ��Ͽ�����Ҫ���캯��
//	info *p{    new info[5]  {   {1,1},{1,2},{1,3},{1,4},{1,5} }   };
//	info*(&rp)(p);//���ýṹ������
//	for (int i = 0; i < 5; i++)
//	{
//		cout << rp[i].id << " " << rp[i].num << endl;
//	}
//
//}
//void main()
//{
//	info infos[5]{   {1,1},{1,2},{1,3},{1,4},{1,5}  };
//	info (&infosp)[5](infos);//���ýṹ������
//	for (auto i : infosp)
//	{
//		cout << i.id << "  " << i.num << endl;
//	}
//	cin.get();
//}
