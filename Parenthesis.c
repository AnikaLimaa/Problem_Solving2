#include<stdio.h>
#include<string.h>
main()
{
    int fb,l,i=0,lb;
    char str[1003];
    while(scanf("%s",&str)!=EOF)
    {
        fb=0,lb=0;

        for(i=0;str[i] != '\0';i++)
        {
            if(str[i]=='(')
            {
                fb++;
            }
            if(str[i]==')')
            {
                lb++;
            }
            if((fb>0)&&(lb>0))
            {
                lb--;
                fb--;
            }
        }
    }
    if((fb==0)&&(lb==0))
    {


    printf("\ncorrect");
    }
    else
    {
        printf("incorrect");
    }
}
