/* program to print all numbers which are multiple of either 3 or 5 but not both */
#include<stdio.h>
int main()
{
	for(int i=0;i<80;i++)
	{
		if(((i%3==0)||(i%5==0))&&!((i%3==0)&&(i%5==0)))
			printf("%d\n",i);
	}}
