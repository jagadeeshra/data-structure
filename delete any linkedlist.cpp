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
void insert_at_begin()
{
	int ele;
	printf("enter the elment to be inserted:");
	
}

void deleteat_at_begin()
{
	int ele;
	p=head;
	ele=p->data;
	head=p->next;
	free(p);
	p=head;
	printf("the delete element=%d",ele);
}
void deleteat_end()
{
	int ele;
	for(p=head;p->next!=NULL;p=p->next)
	t=p;
	ele=p->data;
	t->next=NULL;
	free(p);
	p=t;
	printf("the element=%d",ele);
}
void delete_begin()
{
	int ele;
	p=head;
	ele=p->data;
	head =p->next;
	free(p);
	p=head;
	printf("the deleted element=%d",ele);
}
void insert_at_anyposition()
{
	int ele,pos,i;
	printf("enter the element & position:");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	for(i=1;p=head;i<pos;i++,p=p->next)
	t=p;
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}
void  deleteat_anyposition()
{
	int ele,i,pos;
	printf("enter the number of element:");
	scanf("%d",&pos);
	for(i=1;p=head,i<pos;i++,p=p->next)
	t=p;
	ele=p->data;
	t->next=p->next;
	free(p);
	p=t;
	printf("the elment of the number=%d",ele);
}
 int main()
 {
 	int cho;
 	do
 	{
 		printf("\n main menu\n");
 		printf("\n1. create \n");
 		printf("\n2.display \n");
 		printf("\n3.insert-at-anyposition \n");
 		printf("\n4.delete_begin \n");
 		printf("\n5.insert_begin \n");
 		printf("\n6.insert-at-end\n");
 		printf("\n7.deleteat-position\n");
 		
 		printf("\n2.enter your choice: \n");
 		scanf("%d",&cho);
 		
 		switch(cho)
 		{
 			case 1:create();break;
 			case 2:display();break;
 			case 3:insert_at_anyposition();break;
 			case 4:delete_begin();break;
 			case 5:insert_begin();break;
 			case 6:insert_at_end();break;
 			case 7;deleteat_position();break;
 			
 		
 			case 7:delete_begin();break;
 	
	 		default:
 				printf("enter the choice between 1 to 3");
			 
			 	 }
 		
	 }
	 while(cho>=1&&cho<=3);
	 return 0;
 }
