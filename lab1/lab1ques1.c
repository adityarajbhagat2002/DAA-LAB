#include <stdio.h>
#include<stdlib.h>

void sort(int *arr,int n)
{
	int i,j,temp,k,c=0,d=0;
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (*(arr+j) > *(arr+j+1))
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
				d++;
			}
			c++;
		}
	}
	printf("No. of comparisons: %d\n",c);
	printf("No. of swap: %d\n",d);
	
}

int main()
{
	int *arr,n,i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
      *(arr+i)=(int) rand();
	}
	sort(arr,n);
	printf("The sorted array is: ");
	for (i=0;i<n;i++)
	{
		printf("%d  ",*(arr+i));
	}
	return 0;
}