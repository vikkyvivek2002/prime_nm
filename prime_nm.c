#include<stdio.h>
#include<math.h>
int main()
{
	int n ,i= 1,c=0;
	printf("enter a number");
	scanf("%d",&n );
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	printf("prime numbers :");
	else 
	printf("Not a prime number");
	
	 return 0;
}