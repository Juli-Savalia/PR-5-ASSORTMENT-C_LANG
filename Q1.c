// Write a Program to find all the negative elements from a given 1D array.

#include<stdio.h>

void main()
{
	int n,i;
	
	printf("Enter the size of array:-");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)//to get elemenys from user
	{
		printf("Enter array's element a[%d]:- ",i);
		scanf("%d",&a[i]);
	}
	
//	for(i=0;i<=n;i++)//to print total all elements:
//	{
//		printf("%d entered elements are :- \n",a[i]);
//	}
//	

	//to print negative elements:
	for(i=0;i<=n;i++)
	{
		if(a[i]<0)
		{
			printf("negative elements are :- %d\n",a[i]);
		}
	}
}
