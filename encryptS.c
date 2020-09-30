#include<string.h>
#include<stdio.h>
main()
{
    char ch[1000],ch1[1000];
    int n,l,i,r,j;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(ch);
        l=strlen(ch);

        for(j=0;j<l;j++)
        {
            ch[j]+=3;
        }
        r=l=1;
        for(j=0;j<l;j++)
        {
            ch1[j]=ch[r];
            r--;
        }
        ch1[j]='\0';
        for(j=l/2;j<l;j++)
        {
            ch1[j]-=1;
        }
        for(j=0;j<=l;j++)
        {
            printf("%c",ch1[j]);
        }
        printf("\n");
    }
}
