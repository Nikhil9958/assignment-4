/* program to print those digits whose sum of digits is multiple of 7 */
#include<stdio.h>
int main()
{
	int j,k,i=0;
	for(i=0;i<100;i++)
	{
		j=i/10;
		k=i%10;
	if((j+k)%7==0)
	printf("%d\n",i);
	}}	
