#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void space(char path[]);

int main()
{
    char path[500];
    char path2[500];
    char d[2];
    printf("Windows path:\n");
    scanf("%[^\n]",path);
    d[0]=path[0]+32;
    d[1]='\0';
    int i=2,k=0;
    while(path[i]!=0)
    {
        path2[k]=path[i];
        k++;
        i++;
    }
    path2[k]='\0';
    i=0;
    while(path2[i]!='\0')
    {
        if(path2[i]==92)
        {
            path2[i]='/';
        }
        i++;
    }
    char mnt[6]={"/mnt/\0"};
    strcat(mnt,d);
    char final[500];
    strcpy(final,mnt);
    strcat(final,path2);
    space(final);
    return 0;
}


void space(char path[])
{
    char final[500];
    int i=0,k=0;
    while(path[i]!='\0')
    {
        if(path[i]==' ')
        {
            final[k]=92;
            final[k+1]=' ';
            k=k+2;
            i++;
        }
        else
        {
            final[k]=path[i];
            i++;
            k++;
        }
        
    }
    final[k+1]='\0';
    printf("%s\n",final);
}

