#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[50];
	int roll_no;
};
main()
{
	int n,i;
	printf("Enter the number of Students:\n");
	scanf("%d",&n);	
	
	struct student *ptr;
	
	ptr=(struct student*)malloc(n*sizeof(struct student));
	
	if(ptr==NULL)
	{
		printf("Memory is not Created.");
		return 1;
	}
	else
	{
		struct student *ptr1;
		ptr1=ptr;
		
		for(i=0;i<n;i++)
		{
			printf("Enter the Student%d Information:\n",i+1);
			
			printf("NAME:");
			scanf("%s1",&ptr->name);
			printf("ROLL  NUMBER:\n");
			scanf("%d",&ptr->roll_no);
			ptr++;
		}
		
		printf("---------------------------------\n");
		printf("NAME\t\tROLL NUMBER\n");
		printf("---------------------------------\n");
		
		for(i=0;i<n;i++)
		{
			printf("%s\t\t%d\n",ptr1->name,ptr1->roll_no);
			printf("-----------------------------\n");
			ptr1++;
		}
		free(ptr);
		free(ptr1);
		return 0;
	}
}
