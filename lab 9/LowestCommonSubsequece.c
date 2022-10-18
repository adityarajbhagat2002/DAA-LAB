#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct string{
    char str[100];
    int len;

} string;

int max(int a , int b ){
    return  ( a > b ? a:b);
}

int LCS(string s1, string s2,int i , int j ){
    if(i ==0 || j==0)
    return 0;
    else if(s1.str[i-1]== s2.str[j-1] )
    return  1 + LCS(s1,s2,i-1,j-1);

    else
    return max(LCS(s1,s2,i-1,j),LCS(s1,s2,i,j-1));

}


int main(){
    string str1,str2;
    printf("enter the first string: ");
    scanf("%s", str1.str);
    printf("enter the second string  : ");
    scanf("%s" , str2.str);
    str1.len=strlen(str1.str);
    str2.len=strlen(str2.str);
    printf("the longest common subsequence is %d\n",LCS(str1,str2,str1.len,str2.len));
    return 0;
}
