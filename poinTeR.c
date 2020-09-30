
#include<stdio.h>
int main()
{
    int a[4]={12,22,17,34};
    int *p;
    p=&a[0];

     printf("\n %d",*p++);

     printf("\n %d",++*p);


     printf("\n %d",*p++);

        printf("\n %d",++*p);

}
