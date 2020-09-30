#include<stdio.h>
int n1=1,n2=10;
int odd_even()
{
    if(n1<=n2)
    {
        if(n1%2!=0)
    odd_even(n1);

        n1+=1;

    }
}
int main()
{
    int i1=0;
    odd_even();
    printf("%d",i);
}
