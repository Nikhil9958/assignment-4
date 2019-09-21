/* print all numbers which are multiple of either 3 or 7 */
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<80;i++)
	{
		if((i%3==0)||(i%7==0))
			printf("%d\n",i);
	}}		
