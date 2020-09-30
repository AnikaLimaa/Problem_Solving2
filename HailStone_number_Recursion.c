#include<stdio.h>
#include<string.h>

int num=13,c=0;
int hailstone()
{
    c++;
    if(num!=1)
    {
        if(num%2!=0)
        {
            num=num*3+1;
            //return num;
            printf("%d  ",num);
            hailstone();
        }
        if(num%2==0)
        {
            num=num/2;
            printf("%d  ",num);
            //return num;
            hailstone();
        }

    }
    if(num==1)
    {
        return 1;
        printf("%d  ",num);
    }
}

main()
{
   int n=hailstone();
   printf(" C :%d ",c);
}
