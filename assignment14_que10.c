//10. Write a program in C to copy the elements of one array into another array.Take array
//values from the user.
#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],i,size,j;
	
	printf("enter the size of array ");
	scanf("%d",&size);
	
	printf("enter the element of array ",size);
	
	for(i=0;i<size;i++)
	scanf("%d",&arr1[i]);
		for(i=0;i<size;i++)
		{
			arr2[i]=arr1[i];
		}
		for(i=0;i<size;i++)
	printf("%d ",arr2[i]);
return 0;
}
