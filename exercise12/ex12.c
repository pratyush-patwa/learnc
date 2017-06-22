#include<stdio.h>
int main (int argc, char*argv[])
{
	int areas[]=100;// {10,12,13,14,20};
	char name[]="zed";
	char full_name[]= { 'Z', 'e', 'd', ' ', 'A', '.',' ', 's', 'h', 'a','w','\0'};

printf("The size of an int: %d \n", sizeof(int));
printf(" The size of areas (int[]): %d \n", sizeof(areas));
printf(" The number of ints in areas: %d \n", sizeof(areas)/ sizeof(int));
printf(" The first area is %d, the 2nd %d. \n", areas[0], areas[1]);
printf("The size of a char: %d \n", sizeof(char));
printf(" The size of_name (char[]): %d \n", sizeof(full_name));
printf("The number of chars: %d \n", sizeof(name)/ sizeof(char));
printf("The size of full_name (char[])): %d \n", sizeof(full_name));
printf("The number of chars : %d \n", sizeof(full_name) / sizeof(char));
printf("name=\"%s\" and  full_name=\"%s\"\n", name, full_name);
return 0;
  
}
