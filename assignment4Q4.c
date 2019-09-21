/* program to print all even numbers between 20 and 40 and all odd numbers between 50 and 80 */
#include<stdio.h>
int main()
{
	int i;
	for (i=20;i<80;i++)
	{
		if((((i>20)&&(i<40))&&(i%2==0))||((i>50&&i<80)&&(i%2==1)&&!(i>40&&i<50)))
			printf("%d\n",i);
	}}
