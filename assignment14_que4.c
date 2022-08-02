//4. Write a program to find the greatest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
int main()
{
	int i,arr[10];
	int greatest=0;
	printf("enter 10 number for sum:-");
	for(i=0;i<=9;i++){
	scanf("\n%d",&arr[i]);
	}
	arr[0]=greatest;
		for(i=0;i<=9;i++){
	if(arr[i]>greatest)
	{
		greatest=arr[i];
	}
	}
		printf("greatest number is %d",greatest);
}
