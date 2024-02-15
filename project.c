#include<stdio.h>
main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3];
	int i,j,k;
	
	printf("Enter the Elments of First Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Arr[%d][%d]=",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter the Elments of Second Matrix:\n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("Arr[%d][%d]=",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	// printing Two Matrix 
	
	printf("The First Matrix is:\n");
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("The Second Matrix is:\n");
		for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	
	//Addition of Two Matrix 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr3[i][j]=0;
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("Addition of Two Matrix is :\n");
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	
	//Subtraction of Two Matrix 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr3[i][j]=0;
			arr3[i][j]+=arr1[i][j]-arr2[i][j];
		}
	}
	printf("Subtraction of Two Matrix is :\n");
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	
	//Multiplication of Two Matrix 
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr3[i][j]=0;
			for(k=0;k<3;k++)
			{
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}	
		}
	}
	printf("Multiplication of Two Matrix is :\n");
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
}
