/* program to print all numbers between 20 and 40 and all even numbers between 50 and 80 */
#include<stdio.h>
int main()
{
	int i;
	for(i=21;i<80;i++)
	{
		if(((i>20&&i<40)&&!(i>40&&i<50))||!(i>40&&i<50)&&(i%2==0))
                printf("%d\n",i);
	}
}
