//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
	int a[10],largest,i;
	printf("enter the 10 number ");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
			a[0]=largest;
		 	for(i=0;i<=9;i++)
			{
				if(a[i]>largest)
				{
					largest=a[i];
				}
			}
			printf("%d ",largest);
			
			int second_max=a[i];
			for(i=0;i<=9;i++)
			{
				if(a[i]>second_max && a[i] != largest )
				{
					second_max=a[i];
				}
			}
		printf("second maximum number is %d ",second_max);
return 0;				
}
