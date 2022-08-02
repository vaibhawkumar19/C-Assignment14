//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.
#include<stdio.h>
int main()
{
	int i,arr[10],sum=0;
	printf("enter 10 number for sum:-");
	for(i=0;i<=9;i++)
		scanf("\n%d",&arr[i]);
		for(i=0;i<=9;i++)
		sum+=arr[i];
		printf("\n%d",arr[i]);
	return 0;
}
