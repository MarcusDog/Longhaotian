#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{

	//printf("hehe\n");
	//printf("%d\n", 100); //打印整数 
	//printf("%d\n", sizeof(char));  //sizeof 某变量所占空间大小
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
	// %d 整型 %f  float %if double
    //括号外面为全局变量 括号内为局部变量 名字相同 局部优先
	//int age = 19;
	//double weight = 60.50;
	//printf("%d\n", age);
	//printf("%lf\n", weight);  //定义变量 
    //做一个加法函数 
	/*int a = 19;
	int b = 20;
	int sum = 0; 
    scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);       */
	//double a, b, t; //if 语句 
	//scanf("%lf%lf", &a,&b );
	//if (a > b)
	//{
	//	t = a;
	//	a = b;
	//	b = t;
	//}
	//printf("%g, %g\n", a, b);
	int old,new:
	printf("Please input the score : ");
	scanf("%d", &old);
	switch (old/10)
	{
	case 10:
	case 9:
		new = 5;
		break;	
	case 8:
		new = 4;
		break;	
	case 7:
		new = 3;
		break;	
	case 6 :
		new = 2;
		break;
	default:
		new = 1;
	}
	printf("Before tansformed,"
		"the score is %d/n", old);
	printf("after tansformed,"
		"the score is %d/n", new);

    return 0;
}