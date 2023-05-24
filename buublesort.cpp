#include<stdio.h>
int main()
{
	int j,i,n,A[50],temp;
	 printf("enter the nuber:",&n);
	 
	 printf("enter the %d int value:\n",n);
	 
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-1-i;j++)
	 	{
	 		if(A[j]>A[j+1])
	 		{
	 			temp=A[j];
	 			A[j]=A[j+1];
	 			A[j+1]=temp;
	 			
			 }
		 }
	 }
}
