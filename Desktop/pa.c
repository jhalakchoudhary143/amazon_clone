#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        
        char ch[500];
    FILE *fp;
    fp=fopen("stu.txt","r");
     FILE *fp2= fopen("jhga.txt","w");
    if((fp==NULL)||(fp2==NULL))
    {
        printf("Error");
        return 1;
    }
    while(fgets(ch,sizeof(ch),fp)!=NULL)
    {
          int i=0,j=0;
        while(ch[i])
        {
          
            ch[j]=ch[i];
            j++;
        }
        i++;
        ch[j]='\0';
    fprintf(fp2,"%s",ch);
    
    }
    
    fclose(fp);
    fclose(fp2);
    return 0;
    
}