#include<stdio.h>
main()
{
	int i,j,k,a,b,c,m,n,p;

//1st	
	printf("Enter the size of 1st 3D matrix:\n");
	scanf("%d%d%d",&a,&b,&c);
	int arr1[a][b][c];
	for(i=0;i<a;i++)
	{
		printf("BLOCK(%d)\n",i+1);
		for(j=0;j<b;j++)
		{
			for(k=0;k<c;k++)
			{
				printf("Arr1[%d][%d]=",j,k);
				scanf("%d",&arr1[i][j][k]);
			}
		}
	}
//PRINT 1ST
	printf("\n\nTHE 1ST MATRIX IS :\n");
	for(i=0;i<a;i++)
	{
		printf("BLOCK(%d)\n",i+1);
		for(j=0;j<b;j++)
		{
			for(k=0;k<c;k++)
			{
				printf("%3d",arr1[i][j][k]);
			}
			printf("\n");
		}
	}	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
//2nd
	printf("\nEnter the size of 2nd 3D matrix:\n");
	scanf("%d%d%d",&m,&n,&p);
	int arr2[m][n][p];
	for(i=0;i<m;i++)
	{
		printf("BLOCK(%d)\n",i+1);
		for(j=0;j<n;j++)
		{
			for(k=0;k<p;k++)
			{
				printf("Arr1[%d][%d]=",j,k);
				scanf("%d",&arr2[i][j][k]);
			}
		}
	}
// PRINT 2ND 
	printf("\n\nTHE 2ND MATRIX IS:\n");
	for(i=0;i<m;i++)
	{
		printf("BLOCK(%d)\n",i+1);
		for(j=0;j<n;j++)
		{
			for(k=0;k<p;k++)
			{
				printf("%3d",arr2[i][j][k]);
			}
			printf("\n");
		}
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
//OPERATION
	int arr3[a][b][c];
	if(a==m && b==n && c==p) 
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				for(k=0;k<c;k++)
				{
					arr3[i][j][k] = arr1[i][j][k]+arr2[i][j][k];
				}
			}
		}

	}
	else
	{
		printf("\nSUM OF TWO MATRIX IS NOT POSSIBLE.");
		return 0;
	}
// PRINT RESULT
	printf("\n\nTHE SUM OF THE 3D MATRIX IS :\n");
	for(i=0;i<a;i++)
	{
		printf("BLOCK(%d)\n",i+1);
		for(j=0;j<b;j++)
		{
			for(k=0;k<c;k++)
			{
				printf("%3d",arr3[i][j][k]);
			}
			printf("\n");
		}
	}

	return 0;			
}
