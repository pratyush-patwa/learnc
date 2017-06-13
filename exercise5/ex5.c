#include<stdio.h>
int main(int argc,char *argv[])
{
	//using different operators
	
	int a=5;
	int b=7;
	int c=20;
	int sum, sub, mul, div, x, y, z;

	sum = a+b;
	sub = c-(a+b);
	mul = b*c;
	div = c/a;

	x= ++a + b-- -c;
	y= --c - a++ +b;
	z= a>b + b<c;

	printf("sum =%d \n",sum);
	printf("sub =%d \n",sub);
	printf("mul =%d \n",mul);
	printf("div =%d \n",div);
	printf("x=%d \n",x);
	printf("y=%d \n",y);
	printf("z=%d \n",z);
return 0;
}
