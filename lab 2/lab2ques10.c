#include<stdio.h>

int main()
{
	int n,itr=0,i,j;
	printf("Enter n:\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=(i/3);j++)
		{
			itr++;
		}
	}
	printf("%d",itr);
	return 0;
}

