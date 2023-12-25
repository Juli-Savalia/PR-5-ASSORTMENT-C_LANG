//Write a Program to find the largest element from a given 2D array.

#include<stdio.h>

void main()
{
	int r,c,max=0,i,j,n;
	
	printf("Enter the size of row :-");
	scanf("%d",&r);
	printf("Enter the size of column :-");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter the array elements :-\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=-0;j<n;j++)
		{
			if(i>a[i][j])
			{
				max=a[i][j];
			}
		}
		printf("The largest element is :- %d",max);
	}
}
