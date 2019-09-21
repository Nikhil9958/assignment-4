/* program which will print those numbers whose first digit leaves remainder 1 when divided by 3 */
#include<stdio.h>
int main()
{
	for(int i=1;i<80;i++)
	{
		if((i/10)%3==1)
			printf("%d\n",i);
	}}
