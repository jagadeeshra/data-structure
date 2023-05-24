#include<stdio.h>
#include<stdlib.h>
# define SIZE 4
int top=-1,inp_array[SIZE];
void push();
void pop();
void show();
  int main();
  
  
  	int choice;
  	
  	while (1)
  	{
  		printf("\n perform operation on the stack:");
  		printf("\n push element\n1:");
  		printf("\n enter the choice:");
  		 scanf("%d",&choice);
  		 
  		 switch (choice)
  		 {
  		 	case 1:
  		 		push();
  		 		break;
  		 		case 2:
  		 			pop();
  		 			break;
  		 			case 3;
  		 			show();
  		 			break;
  		 			case 4:
  		 				exit(0);
  		 				  default:
  		 				  	printf("\n invail choice");
  		 				  	
		   }
	  }
  
  void pop()
  {
  	int x;
  	if(top ==size -1)
  	{
  		printf("\n over flow!!");
  		
	  }
	  
	  else
	  {
	  	printf("\n enter the element:");
	  	scanf("%d",&x);
	  	top =top+1;
	  	inp_array[top]=x;
	  }
  }
  void pop()
  {
  	if (top==-1)
  	{
  		printf(" stack is empty");
  		
	  }
	  else
	  {
	  	printf("\n popped  element:%d",inp_array[top]);
	  	top=top-1;
	  }
  }
  void show()
  {
  	if (top == -1)
  	{
  		printf("\n under flow!!");
	  }
	  else
	  {
	  	printf("\n element present in thestack:\n");
	  	for(int i =top;i >=0;--i)
	  	printf("%d\n",inp_array[i]);
	  }
  }
