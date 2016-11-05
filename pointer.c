#include<stdio.h>

int main(int argc, char **argv)
{
	int a = 5;
	int *ptr = &a;
	printf("\n&a = %d", &a);
	printf("\n value of ptr : %d", ptr);
	printf("\n value at ptr : %d", *ptr);
	return 0;
}
