//2. Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user.
#include<stdio.h>
int main()
{
	int i,arr[10],sum=0;
	float avg;
	printf("enter 10 number for sum:-");
	for(i=0;i<=9;i++)
	scanf("\n%d",&arr[i]);
	for(i=0;i<=9;i++)
		sum+=arr[i];
		avg=sum/10;
	printf("average of the 10 number is %f",avg);
	return 0;
}
