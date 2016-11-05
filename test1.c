#include<stdio.h>

int main(int argc, char **argv)
{
	int a[] = {1, 2, 3, 4, 5};
	int *ptr = a;

	int i = 0;
	for(i=0; i<5; i++)
	{
		printf("\n value at %d is %d",i, *(ptr+i));
	}
	return 0;
}
