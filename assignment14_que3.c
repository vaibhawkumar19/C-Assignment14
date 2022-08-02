//3. Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
	int arr[10],i,se=0,so=0;
	printf("enter the 10 number ");
	for(i=0;i<=9;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<=9;i++)
		if(arr[i]%2==0){
			se+=arr[i];
				
		}
		else
		{
			so+=arr[i];
	
		}
			printf("sum of evne number %d\n",se);
			printf("sum of odd number %d",so);
	return 0;
}
