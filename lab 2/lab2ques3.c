#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,itr=0,i,j,k;
	printf("Enter n:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			for (k=0;k<n;k++)
			{
				itr++;
			}
		}
	}
	printf("%d",itr);
	return 0;
}