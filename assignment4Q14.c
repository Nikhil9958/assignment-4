/* program which will print all odd numbers between 0 and 9,20 and 29 and so on and all even numbers between 10 and 19,30 and 39 and so on */
#include<stdio.h>
int main()
{
	for(int i=1;i<100;i++)
	{
		if((((i/10)%2==0)&&(i%2==1))||(((i/10)%2==1)&&(i%2==0)))
				printf("%d\n",i);
				}}
			
