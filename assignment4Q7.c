/* program to print all the even numbers except those which are multiple of either 3 or 5 */
#include<stdio.h>
int main()
{
	for(int i=1;i<100;i++)
             {
		     if((i%2==0)&&(i%3!=0)&&(i%5!=0))
			     printf("%d\n",i);}}
			     
