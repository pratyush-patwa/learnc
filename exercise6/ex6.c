#include<stdio.h>
int main(int argc, char*argv)
{
	int distance=100;
	float power=2.345f;
	double sup_power= 56789.45321;
	char initial = 'A';
	char first_name[]= "Pratyush";
	char last_name[]= "Patwa";

	printf("You are %d miles away.\n",distance);
	printf("You have %f levels of power.\n",power);
	printf("You have %f awesome sup power.\n",sup_power);
	printf("I have an Initial %c.\n",initial);
	printf("I have a first name %s.\n",first_name);
	printf("I have a last name %s.\n",last_name);
	printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);


return 0;
}
