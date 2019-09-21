/* program to print those numbers whose last digit is between 5 and 8 */
#include<stdio.h>
int main()
{
	for(int i=1;i<100;i++)
	{
		if((i%10==5)||(i%10==6)||(i%10==7)||(i%10==8))
			printf("%d\n",i);
	}}
