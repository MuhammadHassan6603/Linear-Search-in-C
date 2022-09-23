#include<stdio.h>
int LinearSearch(int *p,int key,int size)   // ram :  P[2000]
{
	int i;
	for(i=0;i<size;i++)
	{
		if(*p==key)
		{
			return i;			
		}
		p++;
	}
	return -1;
}
void main()
{
	int x[]={10,20,30,40,50};
	int key = 30;      //  key[3]
	int length = 5;     // length [5]
	int index;
	index = LinearSearch(x,key,length);
	                //2000, 30,   5
	if(index==-1)    // index[-1]
	{
		printf("Value Not Found");
	}
	else         //index[i]
	{
		printf("Index is %d and Value is %d" ,index,key);	
	}
}
