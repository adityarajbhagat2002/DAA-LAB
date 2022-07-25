#include <stdio.h>
#include<stdlib.h>

void insertion_sort(int *arr,int n)
{
	int i,j,temp,c=0,d=0;
	for (i=1;i<n;i++)
	{
		temp=*(arr+i);
		j=i-1;
		while (temp<*(arr+j) && j>=0)
		{
			*(arr+j+1)=*(arr+j);
			j--;
			d++;
		}
		c++;
		*(arr+j+1)=temp;
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
	insertion_sort(arr,n);
	printf("The sorted array is: ");
	for (i=0;i<n;i++)
	{
		printf("%d  ",*(arr+i));
	}

	return 0;
}