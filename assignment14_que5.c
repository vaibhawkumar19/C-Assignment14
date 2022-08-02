//5. write a program to find the smallest number stored in an array of size 10.
//5. smallest=a[i];W
#include<stdio.h>
int main()
{
	int a[10],i,smallest=0;
	printf("enter the no ");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
		smallest=a[0];
		for(i=0;i<=9;i++){
			if(smallest>a[i])
			{
				smallest=a[i];	
			}
		
		}
printf("smallest number is %d",smallest);
return 0;
}
