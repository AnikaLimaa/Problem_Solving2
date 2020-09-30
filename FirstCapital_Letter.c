#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char ac[10]={"hffyXggg"};
    int len=sizeof(ac);
    for(i=0;i<len;i++)
    {
    if(ac[i]>='A' && ac[i]<='Z')
    {
        printf("%c\n",ac[i]);
        break;
    }
    }
    return 0;
}
