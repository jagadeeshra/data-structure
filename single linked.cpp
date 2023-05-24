#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node*next;
	
}
*head=NULL,*p,*t,*newnode;

void display()
{
	if(head==NULL)
	printf("the sll is empty");
	else
	{
		for(p=head;p!=NULL;p=p->next)
		printf("%d->",p->data);
		
	}
	
}

void create()
{
	int n,i,ele;
	printf("enter the element list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elment");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode ->data =ele;
		newnode ->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=head;
			
		}
		else{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}
 int main()
 {
 	int cho;
 	do
 	{
 		printf("\n main menu\n");
 		printf("\n1. create \n");
 		printf("\n2.display \n");
 		printf("\n3.exit \n");
 		printf("\n2.enter your choice: \n");
 		scanf("%d",&cho);
 		
 		switch(cho)
 		{
 			case 1:create();break;
 			case 2:display();break;
 			case 3:exit(0);break;
 			default:
 				printf("enter the choice between 1 to 3");
			 
			 	 }
 		
	 }
	 while(cho>=1&&cho<=3);
	 return 0;
 }
