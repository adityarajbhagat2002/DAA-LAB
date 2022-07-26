#include<stdio.h>

int main()
{
	int n,itr=0,i,j;
	printf("Enter n:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<100;j++)
		{
			itr++;
		}
	}
	printf("%d",itr);
	return 0;
}

