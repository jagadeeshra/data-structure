#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 5

int stk[SIZE],front =-1,rear =-1;

void display()
{
	int i;
	if (front ==-1&&rear ==-1)
	printf("the queue is empty");
	
	else
	 for(i=front;i<=rear;i++)
	 printf("%d",queue[i]);
	
}

void void enqueue()
{
	int ele;
	printf("enter the element:");
	scanf("%d",&ele );
	if(rear == size-1)
	printf("queue is full");
	
	else
	{
		if(front ==-1&&rear ==-1)
		{
			front = 0;
			rear = 0;
			
		}
		
		else
		rear = rear+1;
		 queue[rear]=ele;
	}
	
	void dequeue()
	{
		int ele;
		if(front ==-1&&rear ==-1)
		printf("the queue is empty");
		
		else
		{
			ele =queue[front];
			if(front ==rear){
				front=-1;
				rear =-1;
			}
			else
			front=front+1;
			printf("the deleted element=%d",ele);
		}
		int main()
		{
			int cho;
			do{
				printf("\n main memory");
				printf("\n enqueue");
				printf("\n enter your operation");
				scanf("%d",&cho);
				
				switch(cho)
				{
					case 1:enqueue();break;
					case 2:dequeue();break;
					case 3:display();break;
					case 4:exit(0);
					default:printf("please enter between number:");
					
				}
			
			}while(opt>=1&&opt<=4);
		}
		
	}
}
