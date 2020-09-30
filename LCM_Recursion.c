#include<stdio.h>
int n1=22,n2=11,n3=11,m=1,i=2;
int lcm()
{
    if(i<=n3)
    {
        if(n1%i==0)
        {
            if(n2%i==0)
            {
                m=m*i;
                n1=n1/i;
                n2=n2/i;
                i=2;
                lcm();
            }
            else
            {
                i++;
                lcm();
            }
        }
    }
    return m*n1*n2;
}

int main()
{
    int m1=lcm();
    printf("%d",m1);
}
