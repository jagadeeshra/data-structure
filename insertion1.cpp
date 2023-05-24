#include<stdio.h>
#include<Stdlib.h>



int A[10],n=5;

void input_data()
{
	int i;
	printf("enter the array element:");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
}

void output_data()ii   
{
	int i;
	printf("the array element:");
	for(i=0;i<n;i++)
	printf("%d",A[i]);
	
}

void insertion()
{
	int i,ele,pos;
	printf("enter the element");
	scanf("%d",&ele,&pos);
	for(i=n;i>pos;i--)
	A[i]=A[i-1];
	A[pos]=ele;
}

void deletion()
{
	int i,pos;
	printf("enter the elment");
	scanf("%d",&pos);
	for(i=pos;i,n;i++)
	A[i]=A[i+1];
}
 int main()
 {
 	int cho;
 	do
 	{
 		printf("\n main member:");
 		printf("\n input data");
 			printf("\n output data");
 				printf("\n insertion");
 					printf("\n  delete");
 						printf("\n exit");
 							printf("\n enter the choice:");
 							scanf("%d",&cho);
 							
 							switch(cho)
 							{
 								
 								case 1 :input_data();break;
 									case 2 :output_data();break;
 										case 3:insertion();break;
 											case 4:deletion();break;
 												case 5:exit(0);break;
 												default:
 													printf("enter the choice:");
 									
 								
							 }
							 
	 }
	 while(cho>=1&&cho<=5);
	 return 0;
 }

