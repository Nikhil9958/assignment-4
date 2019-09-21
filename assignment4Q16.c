/* program to print all even numbers between 10 and 29, 40 and 59, 70 and 89 */
#include<stdio.h>
int main()
{
    for(int i=10;i<90;i++)
    {
	    if(((i/10)%3==1)||((i/10)%3==2))
		    printf("%d\n",i);
    }}
