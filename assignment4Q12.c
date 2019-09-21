/* program to print numbers between 10 and 19, 30 and 19 and so on */
#include<stdio.h>
int main()
{
	for(int i=0;i<100;i++)
	{
		if(((i/10)%2)==1)
			printf("%d\n",i);
	}}		
