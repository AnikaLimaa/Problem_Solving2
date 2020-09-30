#include<stdio.h>
#include<string.h>

main()
{
char ch[1000],ch1[1000];
gets(ch);
int l=strlen(ch);
int i,j;
for(i=0;i<l;i++)
{
    if((ch[i]>='A'  &&  ch[i]<='Z')  ||  (ch[i]>='a'  &&  ch[i]<='z') )
    {
        ch[i]+=3;
    }
}
int p=l-1;
for(i=0;i<l;i++)
{
    ch1[i]=ch[p];
    p--;
}
for(i=l/2;i<l;i++)
{
    ch1[i]-=1;
}
for(i=0;i<l;i++)
{
    printf("%c",ch1[i]);

}
}
