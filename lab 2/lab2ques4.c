#include<stdio.h>

int main()
{
	int n,itr=0,i,j,k;
	printf("Enter n,k:\n");
	scanf("%d %d",&n, &k);
	for (i=0;i<n;i++)
	{
		for (j=0;j<k;j++)
		{
			itr++;
		}
	}
	printf("%d",itr);
	return 0;
}

