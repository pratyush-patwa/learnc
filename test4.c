#include<stdio.h>
#include<stdlib.h>

int main (int argc, char **argv)
{
int a[]= {1, 2, 3, 4, 5};
int i=0;
int *ptr= a;
printf("\n indexing from array\n");

for(i=0;i<5;i++)
{
	printf("%d\n", a[i]);
}
printf("\nIterating from pointers\n");
 for(i=0;i<5;i++)
{
	printf("\n%d", *(ptr+i));
}
return 0;
}
