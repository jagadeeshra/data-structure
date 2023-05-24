#include<stdio.h>
int bin(int array[],int x,int low,int high){
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(array[mid]==x)
		return mid;
		
		if(array[mid]<x)
		low=mid+1;
		
		else
		   high=mid-1;
		   
		
	}
	return -1;
	
}
int main(void)
{
	int array[]={3,5,4,6,7,8};
	int n=sizeof(array)/sizeof(array[0]);
	int x=3;
	int result =bin(array,x,0,n-1);
	if(result==-1)
	printf("not found");
	else
	printf("element is found %d",result);
	return 0;
}
