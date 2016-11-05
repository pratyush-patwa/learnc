#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	int *a = (int *)malloc(sizeof(int)*5);
	int i =0;
	for(i=0; i<5; i++)
	{
		*(a+i) = i;
	}

	for(i = 0; i<5; i++)
	{
		printf("\n%d", *(a+i));
	}
	return 0;
}
