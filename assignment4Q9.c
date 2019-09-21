/* program to print those numbers whose last digit is multiple of 3 */
#include<stdio.h>
int main()
{
	for(int i=1;i<100;i++)
	{
		if(((i%10)%3)==0)
			printf("%d\n",i);
	}}
