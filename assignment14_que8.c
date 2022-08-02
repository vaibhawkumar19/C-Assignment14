//8. Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
int main()
{
int a[10], size, i, smallest, second_smallest;
  
  printf("Please Enter the size of an array \n");
  scanf("%d",&size);

  printf("\nPlease Enter %d elements of an array: \n", size);
  for(i=0; i<size; i++)
   {
   	 scanf("%d",&a[i]);
   }   
		smallest=a[i];
			for(i=0;i<size;i++)
			{
				if(smallest>a[0])
					smallest=a[i];	
			}
			printf("smallest number of array is %d\n",smallest);
			
			second_smallest=a[i];
				for(i=0;i<size;i++)
				{
					if(second_smallest>a[i] && a[i] != smallest)
						second_smallest=a[i];
				}
			printf("second smallest number is %d",second_smallest);
}
