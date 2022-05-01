#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
   // printf("hello");
    if(argc==1)
    {
        printf("\n");
    }
    else
    {
       for(int i=1;i<argc;i++)
       {
           if(strlen(argv[i])>strlen(argv[1]))
           {
               argv[1]=argv[i];
           }
       }
       printf("%s",argv[1]);
    }   
    return EXIT_SUCCESS;
}