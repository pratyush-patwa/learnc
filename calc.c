#include<stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int div(int x, int y);
int mod(int x, int y);
int mul(int x, int y);

int main(int argc, char* argv)
{	
	int a, b, c;
	

	char ch;

	printf("\nEnter the First integer A");
	scanf("%d",&a);
	printf("\nEnter the Second integer B");
	scanf("%d",&b);
	printf("Enter the operator");
	ch = getchar();


	switch (ch) 
	{
		case '+':
			
			c = sum(a,b);
			printf("%d",c);
			break;
		case '-':
			
			c = sub(a,b);
			printf("%d",c);
			break;
		case '/':
		
			c = div(a,b);
			printf("%d",c);
			break;
		case '%':

			c = mod(a,b);
			printf("%d",c);
			break;
		case '*':
			c = a*b;
			printf("%d",c);
			break;
			
			
		default:
			printf("wrong operation");
	} 
return 0;
}
	int sum(int x, int y)
	{
		return x+y;
	} 
	int sub(int x, int y)
	{
		return x-y;
	}
	int div(int x, int y)
	{
		return x/y;
	}
	int mod(int x, int y)
	{
		return x%y;
	}
	int mul(int x, int y)
	{
		return x*y;
	} 
