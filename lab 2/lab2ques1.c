#include<stdio.h>
#include<stdlib.h>


int main(){
    int n,itr=0;
    printf("enter the value to be verified : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        itr++;
    }
    printf("%d",itr);
    return 0;

}
