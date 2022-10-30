/*C programe to calculate no of liters of milk left with krishna*/
#include<stdio.h>
int main()
{
	float x,left_over_milk;
	printf("Enter the no of gallons of milk=");
	scanf("%f",&x);
	left_over_milk=(x*3.785)-36;
	printf("left over milk in liters=%f",left_over_milk);
	return 0;
}


