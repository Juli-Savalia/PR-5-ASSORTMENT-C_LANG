//Write a Program to find the transpose matrix of a given 2D array:

#include<stdio.h>

void main()
{
	int i,j,n;
	
	printf("Enter the size of an array :-");
	scanf("%d",&n);
	
	int m1[n][n];
	int m2[n][n];
	int m3[n][n];
	
	printf("Enter the elements of an array:-\n");
	
	
	//m1
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:- ",i,j);
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",m1[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\n\n");
	//m2
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("m2[%d][%d]:- ",i,j);
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",m2[i][j]);
			
		}
		printf("\n");
	}

	printf("\n\n");
	//sum of matrix	
	printf("The sum of matrix is :-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			m3[i][j] = m1[i][j] + m2[i][j];
			printf("%d ",m3[i][j]);
			
		}
		printf("\n");
	}	
}


