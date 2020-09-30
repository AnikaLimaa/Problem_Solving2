#include<stdio.h>

int n1=4,n2=6,i=2,m=1,flag=0,c=0;
int lcm()
{
    c++;
    if(i<=4)
    {
    if(n1%2==0)
    {
        if(n2%2==0)
        {
            flag=1;
            m=m*i;
            i++;
            n1=n1/i;
            n2=n2/i;
            i=2;
            c=0;
            lcm();
        }
        flag=0;
    }
    }
    i++;

    lcm();
if(flag==0)
        printf("%d ",m*n1*n2);


}
int main()
{
    int ret=lcm();
   // printf(" %d\n",ret);
}
