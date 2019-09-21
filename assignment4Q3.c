/* program which prints all even number less than 50 and all odd numbers more than 50 */#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<80;i++)
	{
		if(((i<50)&&(i%2==0)||(i>50)&&(i%2==1)))
			printf("%d\t",i);
	}}
