//9. Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user.
#include<stdio.h>
int main()
{
	int a[10],size,i,n,rev=0,r;
	printf("enter the size of array ");
	scanf("%d",&size);
	printf("enter the element of the arry ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	for(i=size-1;i>=0;i--)
      {
	   printf("%d",a[i]);
	  }
}
