#include<stdio.h>
#include<string.h>
char ch,ch1='a';
int i=0;

char c1[10];
char ch2;
int j,s=0,d2=0;

int digitSum(int s1)
{
    if(s1!=0)
    {
        int d1=s1%10;
        d2=d1+d2;
        s1=s1/10;
        digitSum(s1);
    }
    else{ return d2;}
}

int name()
{
   gets(c1);
int l=strlen(c1);

 for(j=0;j<l;j++)
{

ch2=c1[j];
i=0;
if(ch1==c1[j])
{
    s=s+1;
    ch1='a';
    continue;
}
else
{


while(ch1!=c1[j])
{
    i++;
    ch1=ch1+1;
}

i++;

//printf(" I : %d  ",i);

s=s+i;
ch1='a';


}

}
return s;
}

main()
{

printf("\n Enter your name :");

int l1=name();//sam
s=0;
int sum1=digitSum(l1);
//printf("\n %d ",sum1);

printf("\n Enter her name :");
s=0;
int l2=name();//sofi
s=0,d2=0;
int sum2=digitSum(l2);
//printf("\n %d ",sum2);


printf("\n Enter her name :");
s=0;
int l3=name();
s=0,d2=0;

int sum3=sum2+sum1;
printf("\n %d ",sum3);
//printf("\n l1 %d l2 %d l3 %d ",l1,l2,l3);

int Love_SumOfDigit=sum3+l3;
printf("\n %d ",Love_SumOfDigit);
printf("%");
}
