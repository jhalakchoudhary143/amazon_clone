#include<stdio.h>
#include<string.h>
void reverse(char str[],int i)
{
    int len=strlen(str);
    if(i>len/2)
    return;
    char temp=str[i];
    str[i]=str[len-1-i];
    str[len-1-i]=temp;
    reverse(str,i+1);
}
int main()
{
    char str[1000];
    printf("enter a string:");
    scanf("%s",str);
    reverse(str,0);
printf("reversed string:%s\n",str);
    return 0;
}